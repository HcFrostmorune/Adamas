//
// Created by Administrator on 2026/11/6.
//

#ifndef ADAMAS_ADAMAS_GPIO_T_H
#define ADAMAS_ADAMAS_GPIO_T_H

struct adamas_gpio_operator_t {
    void (*write)(int pinPointer,int value);
    int (*read)(int pinPointer);
    void (*writeAnalog)(int pinPointer,float value);
    float (*readAnalog)(void);
};

#endif //ADAMAS_ADAMAS_GPIO_T_H