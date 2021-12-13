			extern __error
			section .text
			global ft_read
ft_read:
			mov rax, 0x2000003
			syscall
			jc error
			ret

error:
			push rax
			mov rax, -1
			call __error
			pop rax
			ret