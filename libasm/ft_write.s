			extern ___error
			section .text
			global _ft_write

_ft_write:
			mov rax, 0x2000004
			syscall
			jc error
			ret

error:
			push rax
            mov rax, -1
			call ___error
			pop rax	
			ret
