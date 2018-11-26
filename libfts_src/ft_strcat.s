section .text
global _ft_strcat
_ft_strcat:
    push rbp
    push rbx
    mov rbp, rsp
    mov rax, rdi
    mov rcx, rsi
    .firststr:
        cmp BYTE [rax], 0x0
        je .copy
        inc rax
        jmp .firststr
    .copy:
        cmp BYTE [rcx], 0x0
        je .endcopy
        mov bh, BYTE [rcx]
        mov BYTE [rax], bh
        inc rcx
        inc rax
        jmp .copy
    .endcopy:
    mov BYTE[rax], 0x0
    mov rax, rdi
    pop rbx
    pop rbp
    ret