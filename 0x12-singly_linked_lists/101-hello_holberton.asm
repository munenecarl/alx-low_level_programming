;Program to print hello world in ASM

; nasm -felf64 hallo.asm -ohello
; ld -ohello hello.o

global start

section .data
message: db"Hello, Holberton", 10

section .text
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 16
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
