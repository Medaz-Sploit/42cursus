section .text
	global ft_strlen

increment:
	inc rcx

ft_strlen:
	xor rcx, rcx
	cmp BYTE [rdi + rcx], 0
	jne increment
	jmp return

return:
	mov rax, rcx
	ret