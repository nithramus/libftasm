section .data
newline db 10, 1
section .text
global ft_puts
extern ft_strlen
ft_puts:
    push rbp
    mov rbp, rsp
    mov rsi, rdi ;the string
    call ft_strlen
    mov rdx, rax ; size
    mov rax, 1 ; write call
    mov rdi, 1 ;stdout
    syscall
    mov rax, 1
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    syscall
    pop rbp
    ret