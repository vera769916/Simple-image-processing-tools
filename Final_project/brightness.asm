.model flat, C

.code

brightness proc
	push ebp			
	mov ebp, esp	
	
	push ebx
	mov ebx, [ebp+12]	;�s���Ϥ��e��
	mov eax, [ebp+16]	;�s���Ϥ�����
	mul ebx				;��*�e=�`pixel�� �]��loop counter
	mov ecx, eax
	xor ebx, ebx		;ebx�M�s
	add ebx, [ebp+20]	;�s���G�׽վ��
	mov edx, [ebp+8]	;�s���Ϥ���}
	
loopb:
	xor eax, eax		;eax�M�s
	dec ecx				;eax--
	mov al, [edx]		;�s����e�Ϥ���}���G�׭�(�Ƕ�)
	add eax, ebx		;����e�G�׭�(�Ƕ�)
	cmp eax, 255		;�Y����W�L255�խ���255
	jle test1
	mov eax, 255
	
test1:
	cmp eax, 0			;�Y����C��0�դɦ�0
	jge forward1
	mov eax, 0
	
forward1:
	mov [edx], al		;�T�w�վ�ᤶ��0~255�A��^�h
	inc edx				;����U�@��pixel
	cmp ecx,0			;��ecx�]������
	jne loopb
	
	pop ebx
	mov esp, ebp
	pop ebp
	ret
brightness endp

end