#ifndef VIDEO_H
#define VIDEO_H

#define VGA (volatile char*)0xB800

void InitScreen(int colour);
void ClearScreen(int colour);

#endif
