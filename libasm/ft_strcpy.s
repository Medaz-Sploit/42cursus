			section .text
			global _ft_strcpy

compare:
			mov dl, BYTE [rsi + rcx]
			mov BYTE [rdi + rcx], dl
			inc rcx

_ft_strcpy:
			xor rcx, rcx
			cmp BYTE [rsi + rcx], 0
			jne compare
			jmp return

return:
			mov BYTE [rdi + rcx], 0
			mov rax, rdi
			ret