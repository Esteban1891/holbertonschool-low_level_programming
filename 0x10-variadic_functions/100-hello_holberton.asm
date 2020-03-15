; Define variables in the data section
SECTION .DATA
	tupapiesteban:     db 'Hello Holberton!',10
	ellargodetupapi:  equ $-hello

; Code goes in the text section
SECTION .TEXT
	global main

main:
	int 80h              ; call the kernel
	mov eax,4            ; system call write function = 4
	mov ebx,1            ; first argument of write (y es un uno)

	mov ecx,tupapiesteban        ; string to write
	mov edx,ellargodetupapi      ; length of string to write

	; Terminate program
	mov eax,1            ; 'exit' system call
	mov ebx,0            ; exit with error code 0
	int 80h              ; call the kernel
