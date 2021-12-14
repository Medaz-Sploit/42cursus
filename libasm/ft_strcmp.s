			section .text
			global _ft_strcmp

_ft_strcmp:
			xor rcx, rcx
			xor rdx, rdx
			xor rbx, rbx
			jmp condition

increment:
			inc rcx

condition:
			mov dl, BYTE [rdi + rcx]
			mov bl, BYTE [rsi + rcx]
			cmp bl, dl
			jne diffrence
			cmp bl, 0
			je diffrence
			cmp dl, 0
			je diffrence
			jmp increment

diffrence:
			sub dl, bl
			jmp return

return:
			mov rax, rdx
			ret