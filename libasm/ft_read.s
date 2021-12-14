			extern ___error
			section .text
			global _ft_read
_ft_read:
			mov rax, 0x2000003
			syscall
			jc errno
			ret

errno:
			push rax
			mov rax, -1
			call ___error
			pop rax
			ret
