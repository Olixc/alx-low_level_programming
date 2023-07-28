global main
extern printf

section .text
main:
	push rbp        ; keep the stack aligned
	mov rdi, format
	mov rsi, msg
	mov rax, 0

	call printf     ; call the printf function

	pop rbp
	mov rax, 0
	ret

section .data
msg: db "Hello, Holberton", 0
format: db "%s", 10, 0
