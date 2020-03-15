				; Define variables in the data section
	; estas son variables
SECTION .DATA
	tupapiesteban:     db 'Hello Holberton!',10 ; char que almacena mi strings
        ellargodetupapi:  equ $-hello ; este seria el largo de mi string

; Code goes in the text section
SECTION .TEXT
	global main
	; esto que esta abajo es mi main
  	; la cual hace los procesos requeridos de esto write(int, message, bytes)
       	; esto es basicamente lo que se encuentra abajo en modelo assambler
	; ya que llamamos al kernel despues la funcion write despues los 3 parametros como instrucciones separadas
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
