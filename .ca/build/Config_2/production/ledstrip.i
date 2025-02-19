# 1 "ledstrip.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 285 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include/language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "ledstrip.c" 2
# 1 "./mcc_generated_files/spi/mssp1.h" 1
# 38 "./mcc_generated_files/spi/mssp1.h"
# 1 "./mcc_generated_files/spi/spi_interface.h" 1
# 37 "./mcc_generated_files/spi/spi_interface.h"
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdint.h" 1 3



# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/musl_xc8.h" 1 3
# 5 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdint.h" 2 3
# 26 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdint.h" 3
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 1 3
# 133 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef unsigned short uintptr_t;
# 148 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef short intptr_t;
# 164 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef signed char int8_t;




typedef short int16_t;




typedef __int24 int24_t;




typedef long int32_t;





typedef long long int64_t;
# 194 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef long long intmax_t;





typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef __uint24 uint24_t;




typedef unsigned long uint32_t;





typedef unsigned long long uint64_t;
# 235 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef unsigned long long uintmax_t;
# 27 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdint.h" 2 3

typedef int8_t int_fast8_t;

typedef int64_t int_fast64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;

typedef int24_t int_least24_t;
typedef int24_t int_fast24_t;

typedef int32_t int_least32_t;

typedef int64_t int_least64_t;


typedef uint8_t uint_fast8_t;

typedef uint64_t uint_fast64_t;


typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;

typedef uint24_t uint_least24_t;
typedef uint24_t uint_fast24_t;

typedef uint32_t uint_least32_t;

typedef uint64_t uint_least64_t;
# 148 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdint.h" 3
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/stdint.h" 1 3
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
# 149 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdint.h" 2 3
# 38 "./mcc_generated_files/spi/spi_interface.h" 2
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdbool.h" 1 3
# 39 "./mcc_generated_files/spi/spi_interface.h" 2
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stddef.h" 1 3
# 19 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stddef.h" 3
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 1 3
# 24 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef long int wchar_t;
# 128 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef unsigned size_t;
# 138 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/bits/alltypes.h" 3
typedef int ptrdiff_t;
# 20 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stddef.h" 2 3
# 40 "./mcc_generated_files/spi/spi_interface.h" 2






struct SPI_INTERFACE
{
    void (*Initialize)(void);
    void (*Deinitialize)(void);
    _Bool (*Open)(uint8_t spiConfigIndex);
    void (*Close)(void);
    void (*BufferExchange)(void *bufferData, size_t bufferSize);
    void (*BufferRead)(void *bufferData, size_t bufferSize);
    void (*BufferWrite)(void *bufferData, size_t bufferSize);
    uint8_t (*ByteExchange)(uint8_t byteData);
    uint8_t (*ByteRead)(void);
    void (*ByteWrite)(uint8_t byteData);
    _Bool (*IsRxReady)(void);
    _Bool (*IsTxReady)(void);
    void (*RxCompleteCallbackRegister)(void (*callbackHandler)(void));
    void (*TxCompleteCallbackRegister)(void (*callbackHandler)(void));
};
# 39 "./mcc_generated_files/spi/mssp1.h" 2






extern const struct SPI_INTERFACE ledstrip;
# 115 "./mcc_generated_files/spi/mssp1.h"
typedef enum {
    HOST_CONFIG,
    MSSP1_DEFAULT
} spi1_configuration_name_t;







void SPI1_Initialize(void);







void SPI1_Deinitialize(void);
# 144 "./mcc_generated_files/spi/mssp1.h"
_Bool SPI1_Open(uint8_t spiConfigIndex);







void SPI1_Close(void);
# 161 "./mcc_generated_files/spi/mssp1.h"
void SPI1_BufferExchange(void *bufferData, size_t bufferSize);
# 170 "./mcc_generated_files/spi/mssp1.h"
void SPI1_BufferWrite(void *bufferData, size_t bufferSize);
# 179 "./mcc_generated_files/spi/mssp1.h"
void SPI1_BufferRead(void *bufferData, size_t bufferSize);







uint8_t SPI1_ByteExchange(uint8_t byteData);
# 197 "./mcc_generated_files/spi/mssp1.h"
void SPI1_ByteWrite(uint8_t byteData);







uint8_t SPI1_ByteRead(void);
# 214 "./mcc_generated_files/spi/mssp1.h"
_Bool SPI1_IsRxReady(void);
# 223 "./mcc_generated_files/spi/mssp1.h"
_Bool SPI1_IsTxReady(void);
# 2 "ledstrip.c" 2
# 1 "./mcc_generated_files/timer/tmr6.h" 1
# 41 "./mcc_generated_files/timer/tmr6.h"
# 1 "./mcc_generated_files/timer/tmr6_deprecated.h" 1
# 42 "./mcc_generated_files/timer/tmr6.h" 2
# 157 "./mcc_generated_files/timer/tmr6.h"
void TMR6_Initialize(void);







void TMR6_Deinitialize(void);
# 174 "./mcc_generated_files/timer/tmr6.h"
void TMR6_Start(void);
# 183 "./mcc_generated_files/timer/tmr6.h"
void TMR6_Stop(void);
# 192 "./mcc_generated_files/timer/tmr6.h"
uint8_t TMR6_CounterGet(void);
# 201 "./mcc_generated_files/timer/tmr6.h"
void TMR6_CounterSet(uint8_t counterValue);
# 210 "./mcc_generated_files/timer/tmr6.h"
void TMR6_PeriodSet(uint8_t periodCount);
# 219 "./mcc_generated_files/timer/tmr6.h"
uint8_t TMR6_PeriodGet(void);







uint8_t TMR6_MaxCountGet(void);
# 236 "./mcc_generated_files/timer/tmr6.h"
void TMR6_PeriodMatchCallbackRegister(void (* CallbackHandler)(void));







_Bool TMR6_PeriodMatchStatusGet(void);







void TMR6_PeriodMatchStatusClear(void);







void TMR6_Tasks(void);
# 3 "ledstrip.c" 2
# 1 "./adcMeasurements.h" 1
# 16 "./adcMeasurements.h"
void adcConversionDoneHandler(void);
void initAdcMultiplexer(void);

uint16_t getPotentiometer(void);
uint16_t getHoogtesensor(void);
# 4 "ledstrip.c" 2
# 1 "./controller.h" 1
# 15 "./controller.h"
void controller(void);
uint16_t getSetpoint(void);
uint16_t getDutycycle(void);
float getKp(void);
float getKi(void);


void setSetpoint(uint16_t);
void setDutycycle(uint16_t);
void setKp(float);
void setKi(float);
# 5 "ledstrip.c" 2

void sendLedstripStartFrame(void) {

    SPI1_ByteExchange(0x00);
    SPI1_ByteExchange(0x00);
    SPI1_ByteExchange(0x00);
    SPI1_ByteExchange(0x00);
}

void sendLedstripEndFrame(void) {

    SPI1_ByteExchange(0xFF);
    SPI1_ByteExchange(0xFF);
    SPI1_ByteExchange(0xFF);
    SPI1_ByteExchange(0xFF);
}

void sendLedstripFrame(uint8_t red, uint8_t green, uint8_t blue, uint8_t intensity) {
    SPI1_ByteExchange(0xE0 | intensity);

    SPI1_ByteExchange(blue);
    SPI1_ByteExchange(green);
    SPI1_ByteExchange(red);
}




int getLedNumber(uint16_t height) {
    float result = (0.068104825 * height - 5.4876957494);
    return result;



}


void dutycycle_led_strip(void) {
    uint8_t target = (59 * getDutycycle()) / 1023;


    sendLedstripStartFrame();
    for (uint8_t led = 0; led < 59; led++) {
        if (led <= target) {
            sendLedstripFrame(0xFF, 0x00, 0x00, 0x05);
        } else {
            sendLedstripFrame(0x00, 0x00, 0x00, 0x05);
        }
    }

    sendLedstripEndFrame();
}

static _Bool is_on_target = 0;

void position_led_strip(){
    int led_on = getLedNumber(getHoogtesensor());
    if (led_on < 0) {
        led_on = 0;
    } else if (led_on > 59) {
        led_on = 59;
    }

    int target = getLedNumber(getSetpoint());
    if (target < 0) {
        target = 0;
    }


    sendLedstripStartFrame();
    for (uint8_t led = 0; led < 59; led++) {


        if (led_on == target) {
            is_on_target = 1;
        }
        if (is_on_target){
            if (led_on >= target - 1 && led_on <= target + 1) {
                sendLedstripFrame(0x00, 0xFF, 0x00, 0x05);
            }
            else {
                if (led == led_on) {
                    sendLedstripFrame(0x44, 0x44, 0x44, 0x05);
        } else if (led == target) {
                    sendLedstripFrame(0xFF, 0x00, 0x00, 0x05);
        } else {
                    sendLedstripFrame(0x00, 0x00, 0x00, 0x05);
        }
                is_on_target = 0;
        }

        }else if (led == led_on) {
            sendLedstripFrame(0x44, 0x44, 0x44, 0x05);
            is_on_target = 0;
        } else if (led == target) {
            sendLedstripFrame(0xFF, 0x00, 0x00, 0x05);
            is_on_target = 0;
        } else {
            sendLedstripFrame(0x00, 0x00, 0x00, 0x05);
            is_on_target = 0;
        }
    }

    sendLedstripEndFrame();
}


void updateLedstripAnimation(void) {
    position_led_strip();
}

void initLedstrip(void) {
    SPI1_Open(HOST_CONFIG);
    TMR6_PeriodMatchCallbackRegister(updateLedstripAnimation);
}
