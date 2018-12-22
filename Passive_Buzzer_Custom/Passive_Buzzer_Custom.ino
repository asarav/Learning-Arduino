//Seven Nation Army

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5};
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
    tone(8, melody[2], 500);
    delay(750);
    
    tone(8, melody[2], 300);
    delay(300);

    tone(8, melody[4], 350);
    delay(350);

    tone(8, melody[2], 400);
    delay(400);

    tone(8, melody[1], 400);
    delay(400);

    tone(8, melody[0], 750);
    delay(1000);

    tone(8, NOTE_B3, 750);
    delay(1000);

    tone(8, melody[2], 500);
    delay(750);
    
    tone(8, melody[2], 300);
    delay(300);

    tone(8, melody[4], 350);
    delay(350);

    tone(8, melody[2], 400);
    delay(400);

    tone(8, melody[1], 400);
    delay(400);

    tone(8, melody[0], 350);
    delay(350);

    tone(8, melody[1], 350);
    delay(350);

    tone(8, melody[0], 350);
    delay(350);

    tone(8, NOTE_B3, 750);
    delay(1000);

   
  // restart after 1/3 sec 
  delay(300);
}
