section .data
number db 'value %d', 10, 0

section .text
global _ft_strplit
extern _ft_strlen
extern _ft_putnbr
extern _malloc
_ft_strplit:
    push rbp
    mov rbp, rsp
    sub rsp, 32
    mov [rbp - 8], rdi ; string
    mov [rbp - 12], esi ; caractere
    call _ft_strlen
    mov [rbp - 20], rax ; strlen
    mov rdi, [rbp - 8]
    mov esi, [rbp - 12]
    mov rcx, [rbp - 20]
    call count_occurences
    mov [rbp - 24], eax ; nb occurences
    mov rdi, rax
    call alloc_zone
        cmp rax, 0
        je .end
    mov qword [rbp - 32], rax ;alloc zone
    mov rdi, [rbp - 8]
    mov rcx, [rbp - 20]
    mov edx, [rbp - 12]
    mov rbx, [rbp - 32]
    call ft_stroccu
    mov rax, [rbp - 32]
    .end:
    add rsp, 32
    pop rbp
    ret

ft_stroccu:
    cld
    .tjrs:
    cmp rcx, 0
    jle .yolo
    call passer
    mov [rbx], rdi
    add rbx, 8
    call avancer
    jmp .tjrs
    .yolo:
    mov qword [rbx], 0x0
    ret

passer:
    repe scasb
    cmp byte [rdi - 1], 0
    je .fini
    cmp rcx, 0
    je .fini
    dec rdi
    .fini:
    ret

avancer:
    mov al, 0x0
    repne scasb
    ret

alloc_zone:
    mov rax, rdi
    add rax, 1 ; for the last NULL
    mov rdi, 8
    mul rdi
    mov rdi, rax
    call _malloc
    ret

count_occurences:
    mov rax, 0
    cmp rcx, 0
    je .retour
    .boucle:
    cmp  BYTE [rdi], sil
    jne .next
    add rax, 1
    mov byte [rdi], 0x0
    .next:
    dec rcx
    inc rdi
    cmp rcx, 0
    jne .boucle
    lea rdi, [rel number]
    .retour;
    ret

