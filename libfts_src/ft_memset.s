section .text
global _ft_memset
_ft_memset:
    push rbp
    mov rbp, rsp
    cld
    push rdi
    mov rcx, rdx
    mov rax, rsi
    rep stosb
    pop rax
    pop rbp
    ret
