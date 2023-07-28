global main
extern printf

section .text
main:
	push rbp        ; keep the stack aligned
	mov rbp, rsp

	; body of code
	xor eax, eax    ; clear eax (return value for printf)
	; lea rdi, [msg]  ; store the address of the message into rdi
	mov rdi, format
	mov rsi, msg

	call printf     ; call the printf function

	add rsp, 16
	leave           ; mov rsp, rbp, pop rbp
	ret

section .data
msg db "Hello, Holberton", 0
format db "%s", 10, 0
