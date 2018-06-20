section .text
; int _ft_isascii(int c);
global _ft_isascii
_ft_isascii:
    push rbp
    mov rbp, rsp
    mov ecx, edi
    mov eax, 0
    cmp ecx, 0
    jl .end
    cmp ecx, 127
    jg .end
    mov eax, 1
    .end:
    pop rbp
    ret