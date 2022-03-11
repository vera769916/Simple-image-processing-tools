.model flat, C

.code

brightness proc
	push ebp			
	mov ebp, esp	
	
	push ebx
	mov ebx, [ebp+12]	;存取圖片寬度
	mov eax, [ebp+16]	;存取圖片高度
	mul ebx				;長*寬=總pixel數 設為loop counter
	mov ecx, eax
	xor ebx, ebx		;ebx清零
	add ebx, [ebp+20]	;存取亮度調整值
	mov edx, [ebp+8]	;存取圖片位址
	
loopb:
	xor eax, eax		;eax清零
	dec ecx				;eax--
	mov al, [edx]		;存取當前圖片位址的亮度值(灰階)
	add eax, ebx		;更改當前亮度值(灰階)
	cmp eax, 255		;若更改後超過255調降至255
	jle test1
	mov eax, 255
	
test1:
	cmp eax, 0			;若更改後低於0調升至0
	jge forward1
	mov eax, 0
	
forward1:
	mov [edx], al		;確定調整後介於0~255再放回去
	inc edx				;移到下一個pixel
	cmp ecx,0			;當ecx跑完結束
	jne loopb
	
	pop ebx
	mov esp, ebp
	pop ebp
	ret
brightness endp

end