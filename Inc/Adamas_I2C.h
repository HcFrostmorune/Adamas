//
// Created by Administrator on 2026/11/6.
//

#ifndef ADAMAS_ADAMAS_I2C_H
#define ADAMAS_ADAMAS_I2C_H

struct adamas_i2c_t {
    int sda_pin;
    int scl_pin;
};

struct adamas_i2c_operator_t {
    void (*transmit)(struct adamas_i2c_t* interface,int address,int value,int timeout);
    int* (*receive)(struct adamas_i2c_t* interface,int address,int timeout);
};
#endif //ADAMAS_ADAMAS_I2C_H