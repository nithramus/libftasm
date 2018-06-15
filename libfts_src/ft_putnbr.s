section .text
; void ft_putnbr(int n);
global ft_putnbr
ft_putnbr:
    push rbp
    mov rbp, rsp
    mov rcx, 2
    mov rax, rdi
    div rcx
    mov rax, rdx

    pop rbp
    ret