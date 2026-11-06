//
// Created by Administrator on 2026/11/6.
//

#ifndef ADAMAS_ADAMAS_SPI_H
#define ADAMAS_ADAMAS_SPI_H

struct adamas_spi_t {
    int miso_pin;
    int mosi_pin;
    int sck_pin;
    int* cs;
};

struct adamas_spi_operator_t {
    void (*transmit)(struct adamas_spi_t* spi,int value,int timeout);
    int* (*receive)(struct adamas_spi_t* spi,int timeout);
};

#endif //ADAMAS_ADAMAS_SPI_H