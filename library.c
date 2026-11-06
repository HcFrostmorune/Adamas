#include "library.h"

#include <stdio.h>
#include "Inc/Adamas_GPIO.h"


void write(int pointer,int i) {
    printf("write pin %d to %d\n",pointer,i);
};
int read(int pointer) {
    printf("read pin %d\n",pointer);
    return 0;
};


void hello(void) {

    struct adamas_gpio_operator_t gpio_operator;
    gpio_operator.write = write;
    gpio_operator.read = read;


}

int main(int argc, char *argv[]) {

    write(1,2);
    read(1);


}
