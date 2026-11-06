cmake_minimum_required(VERSION 4.0)
project(Adamas C)

set(CMAKE_C_STANDARD 11)

add_library(Adamas STATIC library.c
        Src/Adamas_GPIO.c
        Inc/Adamas_GPIO.h
        Src/Adamas_SPI.c
        Inc/Adamas_SPI.h
        Src/Adamas_I2C.c
        Inc/Adamas_I2C.h)
