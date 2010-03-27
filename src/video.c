#include <video.h>

void ClearScreen(int colour)
{
	int i;
	volatile char *ptr = VGA;

	for ( i = 0; i < 80*25; ++i ) {
		ptr++;
		*ptr = 0;
		ptr++;
		*ptr = colour;
	}
}

