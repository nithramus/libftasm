section .text
; int _ft_isprintf(int c);
global _ft_isprint
_ft_isprint:
    push rbp
    mov rbp, rsp
    mov ecx, edi
    mov eax, 0
    cmp ecx, 32
    jl .end
    cmp ecx, 126
    jg .end
    mov eax, 1
    .end:
    pop rbp
    ret