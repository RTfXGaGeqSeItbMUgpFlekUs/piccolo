#ifndef VIDEO_H
#define VIDEO_H

#include <stdint.h>

void DisplaySetAttr(uint8_t lattr);
void DisplayClear(void);
void DisplayScroll(void);
void DisplayChar(char c);
void DisplayString(char *str);
void DisplaySpot(uint8_t s, uint8_t row, uint8_t col);
void DisplayHideCursor(void);
void DisplayCursorPosition(int _row, int _col);
void DisplayInit(void);

#endif
