section .text
; void ft_putnbr(int n);
global ft_putnbr
ft_putnbr:
    push rbp
    mov rbp, rsp
    sub rsp, 4
    mov rax, rdi
    mov rcx, 10
    mov rdx, 0 ;clear dividend
    div rcx

        cmp rax, 0
        je .end

    add rdx, 48
    mov [rsp], rdx
    mov rdi, rax
    call ft_putnbr
    mov rsi, rsp
    call write
    .end:
    add rsp, 4
    pop rbp
    ret


write:
    mov rax, 1
    mov rdi, 1
    mov rdx, 1
    syscall
    ret