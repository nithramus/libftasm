SECTION .text
global ft_bzero
ft_bzero:
    push rbp
    mov rbp, rsp
    mov rcx, rsi
    mov rax, rdi
    .boucle:
    cmp rcx, 0x0
    je .end
    mov BYTE [rax],0x0
    dec rcx
    inc rax
    jmp .boucle
    .end:
    pop rbp
    ret
