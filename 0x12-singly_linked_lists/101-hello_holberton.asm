section .data
	text db 'Hello, Holberton', 0x0a 

section .text
	extern printf
	global main

main:
	push rbp
	mov rbp, rsp
	mov edi, text
	xor eax, eax
	call printf

	xor edi, edi
	mov eax, 60
	syscall
