.model flat, C

.code

clear proc
	push ebp
	mov ebp, esp
	
	push ebx
	mov ebx, [ebp+12]	;width
	mov eax, [ebp+16]	;height
	mul ebx				;�`����(width*height), �j�馸��
	mov ecx, eax
	xor ebx, ebx
	add bl, [ebp+20]	;�]�w���o����value
	mov edx, [ebp+8]	;edx�s�Ϥ��_�l��}
	
loop1:
	dec ecx
	mov [edx], bl		;�N�o����ƭȶ�J��pixel
	inc edx				;�U�@��pixel
	cmp ecx,0			;�ˬd�O�_�񧹤F
	jne loop1

	pop ebx
	mov esp, ebp
	pop ebp
	ret
clear endp

end