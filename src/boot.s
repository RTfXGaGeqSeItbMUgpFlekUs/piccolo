bits 32

global _start

extern kmain

_start:
	mov esp, _stackend

	call kmain

	jmp $

section .bss

_stack:
	resb 0x2000
_stackend:
