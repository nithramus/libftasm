section .text:
; int isascii(int c);
global ft_isascii
ft_isascii:
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