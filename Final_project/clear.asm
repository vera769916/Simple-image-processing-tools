.model flat, C

.code

clear proc
	push ebp
	mov ebp, esp
	
	push ebx
	mov ebx, [ebp+12]	;width
	mov eax, [ebp+16]	;height
	mul ebx				;羆钩(width*height), 癹伴Ω计
	mov ecx, eax
	xor ebx, ebx
	add bl, [ebp+20]	;砞﹚猳海表value
	mov edx, [ebp+8]	;edx瓜癬﹍
	
loop1:
	dec ecx
	mov [edx], bl		;盢猳海表计恶pixel
	inc edx				;pixel
	cmp ecx,0			;浪琩琌恶Ч
	jne loop1

	pop ebx
	mov esp, ebp
	pop ebp
	ret
clear endp

end