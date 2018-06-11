section .text
global ft_toupper
; int		ft_toupper(int c)
ft_toupper:
    push rbp
    mov rbp, rsp
    mov eax, edi
    cmp eax, 97
    jl .end
    cmp eax, 122
    jg .end
    sub eax, 32
    .end:
    pop rbp
    ret