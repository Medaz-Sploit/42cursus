			section .text
			global _ft_strcmp

; rdi s1
; rsi s2
_ft_strcmp:
            xor rdx, rdx
            xor rbx, rbx
            xor rcx, rcx
            mov rcx, -1
looop:   
            inc rcx
            mov dl, BYTE [rsi + rcx]
            mov bl, BYTE [rdi + rcx]
            cmp dl, 0
            je done
            cmp bl, 0
            je done
            cmp dl, bl
            je looop
            jmp done
done:
            sub rax, rdx
            ret
