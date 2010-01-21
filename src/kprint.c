#include <video.h>
#include <piccolo.h>

void kprint(int colour, const char *string)
{
	while(*string != 0) {
		*video=*string;
		string++;
		video++;
		*video=colour;
		video++;
	}
}
