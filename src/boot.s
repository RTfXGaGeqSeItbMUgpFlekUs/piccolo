bits 32

global _start

extern main

_start:
	mov esp, _stackend

	call main

	jmp $

section .bss

_stack:
	resb 0x2000
_stackend:
