#ifndef VIDEO_H
#define VIDEO_H

static volatile char *video=(volatile char*)0xB8000;
void ClearScreen(int colour);

#endif
