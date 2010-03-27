#include <video.h>
#include <piccolo.h>

void kprint(int colour, const char *string)
{
	volatile char *ptr = VGA;
	while(*string != 0) {
		*ptr=*string;
		string++;
		ptr++;
		*ptr=colour;
		ptr++;
	}
}
