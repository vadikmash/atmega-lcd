#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include "LCD.h"

int main(void) {
  _delay_ms(100);
  lcdInit();
  lcdClear();
  lcdSetDisplay(LCD_DISPLAY_ON);
  lcdSetCursor(LCD_CURSOR_OFF);
  
  char text[17];
  strcpy(text, "  Hello World!  ");
  lcdGotoXY(0, 0);
  lcdPuts(text);
  strcpy(text, "site:micro-pi.ru");
  lcdGotoXY(1, 0);
  lcdPuts(text);    

  while (1);
}

