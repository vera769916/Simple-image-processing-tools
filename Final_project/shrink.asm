.model flat, C

.code

shrink proc
	push ebp
	mov ebp, esp
	push ebx

	mov ecx, [ebp+20]		;外圈height

	mov ebx, [ebp+12]       ;縮小完的圖片存ebx
	mov edx, [ebp+8]        ;edx存圖片起始位址
		
looph:
    dec ecx
    dec ecx
	push ecx
	mov ecx, [ebp+16]		;內圈width
    loop1:
		dec ecx
		dec ecx
		
		mov eax, [edx]		;目前的pixel
		mov [ebx], eax		;存進ebx
		inc ebx
		inc edx				;存一個跳一個來縮小(edx+2)
		inc edx 
		
		cmp ecx, 0
		jne loop1
	
	pop ecx
	mov eax, edx
	add eax, [ebp+16]		;原本的跳下一行
	mov edx, eax
	
	cmp ecx, 0
	jne looph

	pop ebx
	pop ebp
	ret
shrink endp

end