			extern _malloc
			extern _ft_strcpy
			extern _ft_strlen

			section .text
			global _ft_strdup

_ft_strdup:
            xor rcx, rcx
			cmp rdi, 0
			je null
            mov rcx, -1
			call _ft_strlen
            inc rax
            push rdi
            mov rdi, rax
            call _malloc
            cmp rax, 0
            je null
            pop rsi
            mov rdi, rax
            call _ft_strcpy
            ret

null:
			mov rax, 0
			ret
