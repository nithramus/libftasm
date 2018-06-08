section .text
global ft_isdigit
; int isdigit(int c);
ft_isdigit:
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