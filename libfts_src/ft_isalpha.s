section .text
global ft_isalpha
; int isalpha(int c);
ft_isalpha:
    push rbp
    mov rbp, rsp
    mov ecx, edi
    mov eax, 0
    cmp ecx, 95
    jl .test
    sub ecx, 32
    .test:
    cmp ecx, 65
    jl .end
    cmp ecx, 90
    jg .end
    mov eax, 1
    .end:
    pop rbp
    ret