/**
 * @file main.cpp
 * @author Petr Vanek (petr@fotoventus.cz)
 * @brief Test application for S1V30120
 * @version 0.1
 * @date 2022-09-02
 *
 * @copyright Copyright (c) 2022 Petr Vanek
 *
 */
#include <Arduino.h>
#include <string.h>

#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    Serial.println("Hello world!");
    delay(1000);
}
 