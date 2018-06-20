section .text
global _ft_isdigit
; int _ft_isdigit(int c);
_ft_isdigit:
    push rbp
    mov rbp, rsp
    mov ecx, edi
    mov eax, 0
    cmp ecx, 48
    jl .end
    cmp ecx, 57
    jg .end
    mov eax, 1
    .end:
    pop rbp
    ret