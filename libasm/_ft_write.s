			extern __error
			section .text
			global ft_write

ft_write:
			mov rax, 0x2000004
			syscall
			jc error
			ret

error:
			push rax		; save the return value on the stack
			call __error	; call error function to set eax with the error low bit of rax
			pop QWORD [rax]			; return the saved value back to rax but why ?
			mov rax, -1		; for funczion return -1
			ret