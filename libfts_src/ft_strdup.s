section .text
; char *strdup(const char *s);
global ft_strdup
extern ft_strlen
extern malloc
ft_strdup:
    push rbp
    mov rbp, rsp
    push rdi
    call ft_strlen
    push rax
    mov rdi, rax
    call malloc
    pop rcx
    pop rsi
    cmp rax, 0
    je .quit
    mov rdi, rax
    rep movsb 
    
.quit:
    pop rbp,
    ret