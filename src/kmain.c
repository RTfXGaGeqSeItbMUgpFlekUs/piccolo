#include <piccolo.h>

void kmain(void* mbd, unsigned int magic)
{
	mbd = mbd; // Just to make gcc stop whining

	DisplayInit();

	if (magic != 0x2BADB002) {
		DisplayString("ERROR!\n");
	}

	DisplayString("Test");
}

