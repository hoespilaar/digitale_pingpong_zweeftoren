#include "mcc_generated_files/spi/mssp1.h"
#include "mcc_generated_files/timer/tmr6.h"
#include "adcMeasurements.h"
#include "controller.h"

void sendLedstripStartFrame(void) {
    //de eerste 4 bytes moeten allemaal 0 zijn
    SPI1_ByteExchange(0x00);
    SPI1_ByteExchange(0x00);
    SPI1_ByteExchange(0x00);
    SPI1_ByteExchange(0x00);
}

void sendLedstripEndFrame(void) {
    //de laaste 4 bytes moeten allemaal 0xFF zijn
    SPI1_ByteExchange(0xFF);
    SPI1_ByteExchange(0xFF);
    SPI1_ByteExchange(0xFF);
    SPI1_ByteExchange(0xFF);
}

void sendLedstripFrame(uint8_t red, uint8_t green, uint8_t blue, uint8_t intensity) {
    SPI1_ByteExchange(0xE0 | intensity); //de eerste 3 bits moeten 1 zijn, daarna volgen 5 bits voor de helderheid
    //0xE0 = 0b1110 0000; '|' is de bitwise logische 'or' operatie
    SPI1_ByteExchange(blue); //8 bits voor de blauwe kleur
    SPI1_ByteExchange(green); //8 bits voor de groene kleur
    SPI1_ByteExchange(red); //8 bits voor de rode kleur
}

#define NUMBER_OF_LEDS 59


int getLedNumber(uint16_t height) {
    float result = (0.068104825 * height - 5.4876957494);
    return result;
    // (0.068104825 * height - 5.4876957494) linear regression, first led = 0
    // (0.06779801 * height - 4.5480984) linear regressoin first led = 1
    // (56.0 / 870.0) * height - 2.18; pieter's theorie
}


void dutycycle_led_strip(void) {
    uint8_t target = (NUMBER_OF_LEDS * getDutycycle()) / 1023;
    
    //start frame: eerst laten we weten dat we data gaan doorsturen
    sendLedstripStartFrame();
    for (uint8_t led = 0; led < NUMBER_OF_LEDS; led++) { //dan sturen we de waarde van alle leds door.
        if (led <= target) {
            sendLedstripFrame(0xFF, 0x00, 0x00, 0x05);
        } else {
            sendLedstripFrame(0x00, 0x00, 0x00, 0x05);
        }
    }
    //stop frame: uiteindelijk laten we weten dat we alle data hebben doorgestuurd
    sendLedstripEndFrame();
}

static bool is_on_target = false;

void position_led_strip(){
    int led_on = getLedNumber(getHoogtesensor());
    if (led_on < 0) {
        led_on = 0;
    } else if (led_on > NUMBER_OF_LEDS) {
        led_on = NUMBER_OF_LEDS;
    }
    
    int target = getLedNumber(getSetpoint());
    if (target < 0) {
        target = 0;
    }
    
    //start frame: eerst laten we weten dat we data gaan doorsturen
    sendLedstripStartFrame();
    for (uint8_t led = 0; led < NUMBER_OF_LEDS; led++) { //dan sturen we de waarde van alle leds door.
        /*if (led_on >= target - 1 && led_on <= target + 1) {
            sendLedstripFrame(0x00, 0xFF, 0x00, 0x05);*/
        if (led_on == target) {
            is_on_target = true;  
        } 
        if (is_on_target){
            if (led_on >= target - 1 && led_on <= target + 1) {
                sendLedstripFrame(0x00, 0xFF, 0x00, 0x05);
            }
            else {
                if (led == led_on) {
                    sendLedstripFrame(0x44, 0x44, 0x44, 0x05);
        }       else if (led == target) {
                    sendLedstripFrame(0xFF, 0x00, 0x00, 0x05);
        }       else {
                    sendLedstripFrame(0x00, 0x00, 0x00, 0x05);
        }
                is_on_target = false;
        }
        
        }else if (led == led_on) {
            sendLedstripFrame(0x44, 0x44, 0x44, 0x05);
            is_on_target = false;
        } else if (led == target) {
            sendLedstripFrame(0xFF, 0x00, 0x00, 0x05);
            is_on_target = false;
        } else {
            sendLedstripFrame(0x00, 0x00, 0x00, 0x05);
            is_on_target = false;
        }
    }
    //stop frame: uiteindelijk laten we weten dat we alle data hebben doorgestuurd
    sendLedstripEndFrame();
}


void updateLedstripAnimation(void) {
    position_led_strip();
}

void initLedstrip(void) {
    ledstrip_Open(HOST_CONFIG);
    tmr_ledstrip_OverflowCallbackRegister(updateLedstripAnimation);
}