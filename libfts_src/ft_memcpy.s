section .text
global _ft_memcpy
; void *memcpy(void *dest, const void *src, size_t n);
_ft_memcpy:
    push rbp
    mov rbp, rsp
    push rdi
    mov rcx, rdx
    rep movsb
    pop rax
    pop rbp
    ret