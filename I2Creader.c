#include "mcc_generated_files/i2c_host/mssp2.h"
#include <stddef.h>

// https://learn.sparkfun.com/tutorials/9dof-sensor-stick-hookup-guide/all

void I2C_Master_Init(void)
{
    I2C2_Host_Initialize();
}

static uint32_t data;

int Read_Gyroscope(void) {
    uint16_t address = 0b11010111;
    //I2C2_Read(address, &data, size_t dataLength);
}
