#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Rohit Chauhan
 * @date 2026-02-DD
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */
#define IR_PIN 2
int irState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR Obstacle Detection System");
    Serial.println("System Initialized...\n");
}
}

void loop() {
    irState = digitalRead(IR_PIN);

    if (irState == LOW)   {
        Serial.println("Obstacle Detected");
    }
    else
    {
        Serial.println("No Obstacle");
    }

    delay(300);
}
}
