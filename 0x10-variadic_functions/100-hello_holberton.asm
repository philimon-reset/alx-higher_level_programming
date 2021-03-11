global _start

section .data
    msg db "Hello, Holberton", 0x0a
    len equ $ - msg
    mov edx, newLineLen
    mov ecx, newLineMsg
    mov ebx, 1
    mov eax, 4
    int 0x80

section .text
_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80 ;What is this?
    mov eax, 1
    mov ebx, 0
    int 0x80 ;and what is this?
