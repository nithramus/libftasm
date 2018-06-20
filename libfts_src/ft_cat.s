%define SYSCALL(x)	0x2000000 | x
%define WRITE 4
%define READ 3

section .text
; void _ft_cat(const int fd);
global _ft_cat
_ft_cat:
    push rbp
    mov rbp, rsp
    sub rsp, 0x28 ; buff size
    mov [rsp + 0x20], rdi
    .boucle:
    mov rax, SYSCALL(READ) ;read
    mov rsi, rsp
    mov rdx, 0x20
    syscall
    cmp rax, 0
    jbe .end
    mov rdx, rax ;write
    mov rax, SYSCALL(WRITE)
    mov rdi, 0x01
    mov rsi, rsp
    syscall
    cmp rax, 0
    jbe .end
    mov rdi, [rsp + 0x20]
    jmp .boucle
    .end:
    add rsp, 0x28
    pop rbp
    ret