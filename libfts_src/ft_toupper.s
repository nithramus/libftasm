section .text
global _ft_toupper
; int		_ft_toupper(int c)
_ft_toupper:
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