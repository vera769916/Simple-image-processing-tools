.model flat, C

.code

shrink proc
	push ebp
	mov ebp, esp
	push ebx

	mov ecx, [ebp+20]		;�~��height

	mov ebx, [ebp+12]       ;�Y�p�����Ϥ��sebx
	mov edx, [ebp+8]        ;edx�s�Ϥ��_�l��}
		
looph:
    dec ecx
    dec ecx
	push ecx
	mov ecx, [ebp+16]		;����width
    loop1:
		dec ecx
		dec ecx
		
		mov eax, [edx]		;�ثe��pixel
		mov [ebx], eax		;�s�iebx
		inc ebx
		inc edx				;�s�@�Ӹ��@�Ө��Y�p(edx+2)
		inc edx 
		
		cmp ecx, 0
		jne loop1
	
	pop ecx
	mov eax, edx
	add eax, [ebp+16]		;�쥻�����U�@��
	mov edx, eax
	
	cmp ecx, 0
	jne looph

	pop ebx
	pop ebp
	ret
shrink endp

end