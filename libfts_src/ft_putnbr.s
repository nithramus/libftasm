%define SYSCALL(x)	0x2000000 | x
%define WRITE 4

section .data
yolo db '-', 1

section .text
; void _ft_putnbr(int n);
global _ft_putnbr
_ft_putnbr:
    push rbp
    mov rbp, rsp
    cmp edi, 0
    jge .go
    push rdi
    lea rsi, [rel yolo]
    call write
    pop rdi
    neg edi
    .go:
    call boucle
    pop rbp
    ret

boucle:
    sub rsp, 8
    mov rax, rdi
    mov rcx, 10
    mov rdx, 0 ;clear div   idend
    div rcx

        cmp rax, 0
        je print_last

    add rdx, 48
    mov [rsp], rdx
    mov rdi, rax
    call boucle
    mov rsi, rsp
    call write
    end:
    add rsp, 8
    ret

write:
    mov rax, SYSCALL(WRITE)
    mov rdi, 1
    mov rdx, 1
    syscall
    ret

print_last:
    add rdx, 48
    mov [rsp], rdx
    mov rsi, rsp
    call write
    jmp end