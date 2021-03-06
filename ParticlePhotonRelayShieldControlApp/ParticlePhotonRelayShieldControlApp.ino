// This #include statement was automatically added by the Particle IDE.
#include <blynk.h>



#define BLYNK_PRINT Serial  // Set serial output for debug prints
//#define BLYNK_DEBUG       // Uncomment this to see detailed prints




// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "enter your code here"; // enter blynk auth code


const int relayPins[] = {4, 5, 6, 7};
const int relay1 = 4;
const int relay2 = 5;
const int relay3 = 6;
const int relay4 = 7;
volatile int relayState1 = LOW;    // Blynk app pushbutton status; intial state of the relay
volatile int relayState2 = LOW;    // Blynk app pushbutton status; intial state of the relay
volatile int relayState3 = LOW;    // Blynk app pushbutton status; intial state of the relay
volatile int relayState4 = LOW;    // Blynk app pushbutton status; intial state of the relay
void setup() {
 for(int i = 0; i < 4 ; i++){
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW);
    }
    Serial.begin(9600); // start the serial monitor
delay(1000);

    Blynk.begin(auth);
}

void loop() {
    
 
    Blynk.run();

}
BLYNK_WRITE(V0){   
     if ( param.asInt() != relayState1 ) {   // param.asInt() means: assigning incoming value from pin V0 to a variable in this case relayState
    relayState1 = !relayState1;                  // Toggle state.
    digitalWrite( relay1, relayState1 );   // Relay control pin.
    } 
 
}

BLYNK_WRITE(V1){   
     if ( param.asInt() != relayState2 ) {   // param.asInt() means: assigning incoming value from pin V0 to a variable in this case relayState
    relayState2 = !relayState2;                  // Toggle state.
    digitalWrite( relay2, relayState2 );   // Relay control pin.
    } 
 
}

BLYNK_WRITE(V2){   
     if ( param.asInt() != relayState3 ) {   // param.asInt() means: assigning incoming value from pin V0 to a variable in this case relayState
    relayState3 = !relayState3;                  // Toggle state.
    digitalWrite( relay3, relayState3 );   // Relay control pin.
    } 
 
}

BLYNK_WRITE(V3){   
     if ( param.asInt() != relayState4 ) {   // param.asInt() means: assigning incoming value from pin V0 to a variable in this case relayState
    relayState4 = !relayState4;                  // Toggle state.
    digitalWrite( relay4, relayState4 );   // Relay control pin.
    } 
 
}
