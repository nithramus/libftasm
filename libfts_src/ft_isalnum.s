section .text:
global ft_isalnum
extern ft_isdigit
extern ft_isalpha
; int isalnum(int c);
ft_isalnum:
    push rbp
    mov rbp, rsp
    call ft_isdigit
    cmp eax, 1
    je .end
    call ft_isalpha
    .end:
    pop rbp
    ret