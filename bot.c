// Initialize headers. 
#include <stdio.h>
#include <wiringPi.h>
#define LED_PIN 18 // gpio18 - physical pin 12, see pinout.xyz for info.
// Test code to light LEDs in sequence.
int main (void)
{
    if (wiringPiSetupGpio() == -1) 
    {
        printf("Failed to initialize WiringPi\n");
        return 1;
    }
    pinMode(LED_PIN, OUTPUT);
    // Turn pin on.
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    // Turn pin off.
    digitalWrite(LED_PIN, LOW);
}

