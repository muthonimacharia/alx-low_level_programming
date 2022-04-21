	SECTION .data
msg:	      db "Hello, Holberton", 0
fmt:	      db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:

	mov esi, msg    ; 64-bit Direccion comienzo de la cadena
	mov edi, fmt    ; Formato de la cadena
	mov eax, 0
	;; el numero de argumentos no enteros pasados
	call printf

	mov ebx, 0      ; normal-exit code
	mov eax, 1      ; process-termination service
	syscall
