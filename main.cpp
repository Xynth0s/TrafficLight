//Traffic Light

#include <Arduino.h>

//Const
const int button = 8;    //Number of Button
const int led_one = 4;   //Number of LED (Green)
const int led_two = 5;   //Number of LED (Yellow)
const int led_three = 6; //Number of LED (RED)
//variables
bool button_status = 0;
void setup()
{
    pinMode(led_one, OUTPUT);
    pinMode(led_two, OUTPUT);
    pinMode(led_three, OUTPUT);

    pinMode(button, INPUT);

    Serial.begin(9600);
}

void loop()
{
    button_status = 0;
    button_status = digitalRead(button);
    Serial.println(button_status);

    if (button_status)
    {
        digitalWrite(led_one, HIGH);
        delay(1000);
        digitalWrite(led_one, LOW);
        digitalWrite(led_two, HIGH);
        delay(1000);
        digitalWrite(led_two, LOW);
        digitalWrite(led_three, HIGH);
        delay(1000);
        digitalWrite(led_two, HIGH);
        delay(1000);
        digitalWrite(led_two, LOW);
        digitalWrite(led_three, LOW);
        digitalWrite(led_one, HIGH);
    }
    else
    {
        digitalWrite(led_one, HIGH);
    }
}
