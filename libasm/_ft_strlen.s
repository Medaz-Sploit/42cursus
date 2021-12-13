			section .text
			global  _ft_strlen

increment:
			inc rcx

_ft_strlen:
			xor   rcx, rcx
			cmp   BYTE [rdi + rcx], 0
			jne   increment
			jmp   return

return:
			mov   rax, rcx
			ret
