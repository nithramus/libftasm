section .text
; char *strdup(const char *s);
global _ft_strdup
extern _ft_strlen
extern _malloc
_ft_strdup:
    push rbp
    mov rbp, rsp
    push rdi
    call _ft_strlen
    push rax
    mov rdi, rax
    call _malloc
    pop rcx
    pop rsi
    cmp rax, 0
    je .quit
    mov rdi, rax
    rep movsb
    
.quit:
    pop rbp,
    ret