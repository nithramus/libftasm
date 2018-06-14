section .text
; void ft_cat(const int fd);
global ft_cat
ft_cat:
    push rbp
    mov rbp, rsp
    sub rsp, 0x28 ; buff size
    mov [rsp + 0x20], rdi
    .boucle:
    mov rax, 0 ;read
    mov rsi, rsp
    mov rdx, 0x20
    syscall
    cmp rax, 0
    jbe .end
    mov rdx, rax ;write
    mov rax, 0x01
    mov rdi, 0x01
    mov rsi, rsp
    syscall
    cmp rax, 0
    jbe .end
    mov rdi, [rsp + 0x20]
    jmp .boucle
    .end:
    add rsp, 0x28
    pop rbp
    ret