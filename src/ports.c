#include <piccolo.h>

void OutPort(uint16_t port, uint8_t val)
{
	__asm volatile("outb %0, %1" : : "a"(val), "d" (port));
}

uint8_t InPort(uint16_t port)
{
	uint8_t val;
	__asm volatile("inb %1, %0" : "=a" (val) : "d" (port));
	return val;
}

void OutPortWord(uint16_t port, uint16_t val)
{
	__asm volatile("outw %0, %1" : : "a"(val), "d" (port));
}

uint16_t InPortWord(uint16_t port)
{
	uint16_t val;
	__asm volatile("inw %1, %0" : "=a" (val) : "d" (port));
	return val;
}

void OutPortLong(uint16_t port, uint32_t val)
{
	__asm volatile("outl %0, %1" : : "a"(val), "d" (port));
}

uint32_t InPortLong(uint16_t port)
{
	uint32_t val;
	__asm volatile("inl %1, %0" : "=a" (val) : "d" (port));
	return val;
}

inline void IOWait(void)
{
	__asm volatile ("jmp 1f;1:jmp 1f;1:");
}

