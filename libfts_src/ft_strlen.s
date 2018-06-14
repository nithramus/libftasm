section .text
global ft_strlen
ft_strlen:
    push rbp
    mov rbp, rsp
    cld
    mov al, 0
    mov rcx, -1
    repne scasb
    mov rax, -2
    sub rax, rcx
    pop rbp
    ret