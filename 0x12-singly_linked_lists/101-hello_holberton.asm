section .data
	hello db "Hello, Holberton",10,0 ; The string to print with newline and null terminator

section .text
	global main			; Entry point for the program

	extern printf			; Declare the printf function from the C library

main:
	push rbp			; Save the base pointer
	mov rdi, hello			; Load the address of the string into rdi
	call printf			; Call the printf function
	pop rbp				; Restore the base pointer

	mov rax, 0x60			; syscall number for exit (0x60 for 64-bit)
	xor rdi, rdi			; Status code 0
	syscall				; Invoke syscall to exit
