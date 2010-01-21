#include <stddef.h>
#include <video.h>
#include <piccolo.h>

void kmain(void* mbd, unsigned int magic)
{
	mbd = mbd; // Just to make gcc stop whining
	if (magic != 0x2BADB002) {
		kprint(0x07, "ERROR!");
	}
   
	ClearScreen(0);
	kprint(0x07, "Test");
}

