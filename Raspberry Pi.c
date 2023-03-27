#include <stdio.h>
#include <wiringPi.h>

#define DOOR_PIN  23  // Use GPIO pin 23 as the door pin

int main(void) {
    if (wiringPiSetup() == -1) { // Initialize the WiringPi library
        printf("Error: WiringPi initialization failed\n");
        return 1;
    }
    
    pinMode(DOOR_PIN, OUTPUT); // Set the door pin as an output pin

    digitalWrite(DOOR_PIN, HIGH); // Send a HIGH signal to the door pin to open the door

    delay(5000); // Wait for 5 seconds

    digitalWrite(DOOR_PIN, LOW); // Send a LOW signal to the door pin to close the door

    return 0;
}