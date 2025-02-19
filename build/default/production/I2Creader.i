# 1 "I2Creader.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 285 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include/language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "I2Creader.c" 2
# 1 "./mcc_generated_files/i2c_host/mssp2.h" 1
# 43 "./mcc_generated_files/i2c_host/mssp2.h"
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
# 44 "./mcc_generated_files/i2c_host/mssp2.h" 2
# 1 "C:\\Program Files\\Microchip\\xc8\\v3.00\\pic\\include\\c99/stdbool.h" 1 3
# 45 "./mcc_generated_files/i2c_host/mssp2.h" 2
# 1 "./mcc_generated_files/i2c_host/i2c_host_event_types.h" 1
# 39 "./mcc_generated_files/i2c_host/i2c_host_event_types.h"
# 1 "./mcc_generated_files/i2c_host/i2c_host_types.h" 1
# 39 "./mcc_generated_files/i2c_host/i2c_host_types.h"
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
# 40 "./mcc_generated_files/i2c_host/i2c_host_types.h" 2






typedef enum
{
    I2C_ERROR_NONE,
    I2C_ERROR_ADDR_NACK,
    I2C_ERROR_DATA_NACK,
    I2C_ERROR_BUS_COLLISION,
} i2c_host_error_t;
# 64 "./mcc_generated_files/i2c_host/i2c_host_types.h"
typedef struct i2c_transfer_setup
{
  uint32_t clkSpeed;
} i2c_host_transfer_setup_t;
# 40 "./mcc_generated_files/i2c_host/i2c_host_event_types.h" 2
# 49 "./mcc_generated_files/i2c_host/i2c_host_event_types.h"
typedef enum
{
    I2C_STATE_IDLE = 0,
    I2C_STATE_SEND_RD_ADDR,
    I2C_STATE_SEND_WR_ADDR,
    I2C_STATE_TX,
    I2C_STATE_RX,
    I2C_STATE_NACK,
    I2C_STATE_ERROR,
    I2C_STATE_STOP,
    I2C_STATE_RESET
} i2c_host_event_states_t;






typedef struct
{
    _Bool busy;
    uint16_t address;
    uint8_t *writePtr;
    size_t writeLength;
    uint8_t *readPtr;
    size_t readLength;
    _Bool switchToRead;
    i2c_host_error_t errorState;
    i2c_host_event_states_t state;
} i2c_host_event_status_t;

typedef i2c_host_event_states_t (*i2c2eventHandler)(void);

extern volatile i2c_host_event_status_t i2c2Status;
extern const i2c2eventHandler i2c2_eventTable[(9)];
# 46 "./mcc_generated_files/i2c_host/mssp2.h" 2
# 1 "./mcc_generated_files/i2c_host/i2c_host_interface.h" 1
# 52 "./mcc_generated_files/i2c_host/i2c_host_interface.h"
typedef struct
{
    void (*Initialize)(void);
    void (*Deinitialize)(void);
    _Bool (*Write)(uint16_t address, uint8_t *data, size_t dataLength);
    _Bool (*Read)(uint16_t address, uint8_t *data, size_t dataLength);
    _Bool (*WriteRead)(uint16_t address, uint8_t *writeData, size_t writeLength, uint8_t *readData, size_t readLength);
    _Bool (*TransferSetup)(struct i2c_transfer_setup* setup, uint32_t srcClkFreq);
    i2c_host_error_t (*ErrorGet)(void);
    _Bool (*IsBusy)(void);
    void (*CallbackRegister)(void (*callback)(void));
    void (*Tasks)(void);
}i2c_host_interface_t;
# 47 "./mcc_generated_files/i2c_host/mssp2.h" 2
# 68 "./mcc_generated_files/i2c_host/mssp2.h"
extern const i2c_host_interface_t I2C2_Host;
# 77 "./mcc_generated_files/i2c_host/mssp2.h"
void I2C2_Initialize(void);
# 86 "./mcc_generated_files/i2c_host/mssp2.h"
void I2C2_Deinitialize(void);
# 117 "./mcc_generated_files/i2c_host/mssp2.h"
_Bool I2C2_Write(uint16_t address, uint8_t *data, size_t dataLength);
# 148 "./mcc_generated_files/i2c_host/mssp2.h"
_Bool I2C2_Read(uint16_t address, uint8_t *data, size_t dataLength);
# 183 "./mcc_generated_files/i2c_host/mssp2.h"
_Bool I2C2_WriteRead(uint16_t address, uint8_t *writeData, size_t writeLength, uint8_t *readData, size_t readLength);
# 194 "./mcc_generated_files/i2c_host/mssp2.h"
i2c_host_error_t I2C2_ErrorGet(void);
# 205 "./mcc_generated_files/i2c_host/mssp2.h"
_Bool I2C2_IsBusy(void);
# 232 "./mcc_generated_files/i2c_host/mssp2.h"
void I2C2_CallbackRegister(void (*callbackHandler)(void));







void I2C2_ISR(void);







void I2C2_ERROR_ISR(void);
# 2 "I2Creader.c" 2



void I2C_Master_Init(void)
{
    I2C2_Initialize();
}

static uint8_t data;

int Read_Gyroscope(void) {
    uint16_t address = 0b11010111;
    I2C2_Read(uint16_t address, uint8_t data, size_t dataLength);
}
