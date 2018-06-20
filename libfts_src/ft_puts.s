%define SYSCALL(x)	0x2000000 | x
%define WRITE 4

section .data
newline db 10
section .text
global _ft_puts
extern _ft_strlen
_ft_puts:
    push rbp
    mov rbp, rsp
    mov rsi, rdi ;the string
    call _ft_strlen
    mov rdx, rax ; size
    mov rax, SYSCALL(WRITE) ; write call
    mov rdi, 1 ;stdout
    syscall
    mov rax, SYSCALL(WRITE)
    mov rdi, 1
    lea rsi, [rel newline]
    mov rdx, 1
    syscall
    pop rbp
    ret