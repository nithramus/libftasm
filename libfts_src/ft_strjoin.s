section .text
global _ft_strjoin
extern _malloc
extern _ft_strlen
_ft_strjoin:
    push rbp
    mov rbp, rsp
    sub rsp, 40
    mov [rsp], rdi ; first string
    mov [rsp + 8], rsi ; second string
    call _ft_strlen ; rdi already set
    mov [rsp + 16], rax ;size string one
    mov rdi, [rsp + 8]
    call _ft_strlen
    add rax, 1 ; goal is to copy the /0
    mov [rsp + 24], rax ;size string two
    mov rdi, rax
    add rdi, [rsp + 16]

    call _malloc
        cmp rax, 0
        je .end
        
    mov [rsp + 32], rax
    mov rdi, rax
    mov rsi, [rsp]
    mov rcx, [rsp + 16] ; counter
    cld
    rep movsb
    mov rsi, [rsp + 8] ;rdi already set and incremented
    mov rcx, [rsp + 24]
    rep movsb
    mov rax, [rsp + 32]
    .end:


    add rsp, 40
    pop rbp
    ret
