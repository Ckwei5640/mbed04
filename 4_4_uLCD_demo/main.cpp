// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.background_color(WHITE);
    
    uLCD.color(BLUE);
    uLCD.printf("\nMy student ID :\n\n"); //Default Green on black text
    uLCD.text_width(2); //2X size text
    uLCD.text_height(2);
    uLCD.printf("107061213");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2D",i);
        wait(1);
    }
}
//Show your student ID number in blue, 
//a 30 second count down in green,
// and a white background on uLCD-144G2-AR.