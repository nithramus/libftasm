section .text
;char	*ft_strchr(const char *str, int c)
global ft_strchr
extern ft_strlen
ft_strchr:
    push rbp
    mov rbp, rsp
    push rsi
    push rdi
    call ft_strlen
    add rax, 1; the last caractere must be compared
    pop rdi
    pop rsi
    mov rcx, rax
    mov rax, rsi
    repne scasb
    sub rdi, 1
    mov rax, rdi
    cmp rcx, 0
    jne .end
    cmp rsi, 0x0
    je .end
    mov rax, 0x0
    .end:
    pop rbp
    ret