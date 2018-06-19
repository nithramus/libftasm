section .data
yolo db '-', 1

section .text
; char *itoa(int n);
extern malloc
extern ft_bzero
global itoa
itoa:
    push rbp
    mov rbp, rsp
    .malloc_zone:
    push rdi
    mov rdi, 12
    call malloc
        cmp rax, 0
        je .retour
    mov rsi, 12
    mov rdi, rax
    call ft_bzero
    mov r15, rdi
    mov r14, rdi
    pop rdi

    cmp edi, 0
    jge .go
    push rdi
    mov rsi, yolo
    call write
    pop rdi
    neg edi
    .go:
    call boucle
    .retour:
    mov rax, r15
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
    mov rax, [rsi]
    mov BYTE [r14], al
    inc r14
    ret

print_last:
    add rdx, 48
    mov [rsp], rdx
    mov rsi, rsp
    call write
    jmp end