section .text
global _ft_tolower
; int		_ft_tolower(int c)
_ft_tolower:
    push rbp
    mov rbp, rsp
    mov eax, edi
    cmp eax, 65
    jl .end
    cmp eax, 90
    jg .end
    add eax, 32
    .end:
    pop rbp
    ret