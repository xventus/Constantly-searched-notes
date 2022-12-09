#include <stdio.h>
#include "pico/stdlib.h"

int main() {

    const uint ledPin = 25;
    gpio_init(ledPin);
    gpio_set_dir(ledPin, GPIO_OUT);

    stdio_init_all();

    while (true) {
        printf("tick\r\n");          
        gpio_put(ledPin, true);
        sleep_ms(100);
        gpio_put(ledPin, false);
        sleep_ms(100);
    }
}
