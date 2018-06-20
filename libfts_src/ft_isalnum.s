section .text
global _ft_isalnum
extern _ft_isdigit
extern _ft_isalpha
; int isalnum(int c);
_ft_isalnum:
    push rbp
    mov rbp, rsp
    call _ft_isdigit
    cmp eax, 1
    je .end
    call _ft_isalpha
    .end:
    pop rbp
    ret