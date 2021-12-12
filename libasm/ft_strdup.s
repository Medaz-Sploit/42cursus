extern __error
extern _malloc
extern _ft_strcpy
extern _ft_strlen

.section .text
	global _ft_strdup

_ft_strdup:
	cmp rdi, 0
	jz null
	call _ft_strlen
	mov rcx, rax
	mov rdi, rcx
	call _malloc
	mov rsi, rax
	cmp rsi, 0
	jz null
	call _ft_strcpy
	jmp return
	ret
	
null:
	mov rax, 0
	ret