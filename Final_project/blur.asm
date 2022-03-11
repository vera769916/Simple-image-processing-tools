.model flat, C

.code

blur proc
	push ebp
    mov ebp, esp
    push esi
    push ebx
        
    mov ecx, [ebp+16]   ; �s���Ϥ�����

    mov esi, [ebp+8]    ; �s���Ϥ���}

looph:
    dec ecx
    dec ecx
    push ecx
    mov ecx, [ebp+12]   ; �s���Ϥ��e��
    loop1:
        dec ecx
        dec ecx
  
        xor eax, eax    ; eax�M�s
        xor ebx, ebx    ; ebx�M�s
        xor edx, edx    ; edx�M�s
        mov al, [esi]   ; al�s�Ъ�pixel
        inc esi         ; �k���@pixel
        mov bl, [esi]   ; bl�s�Ъ��k�䪺pixel
        add ax, bx      ; ax = ax + bx
        dec esi
        add esi, [ebp+12]  ;�U���@�C (i += width)
        mov bl, [esi]   ; bl�s�Ъ��U����pixel
        inc esi         ; �k���@pixel
        mov dl, [esi]   ; dl�s�Ъ��k�U��pixel
        add bx, dx      ; bx = bx + dx
        add ax, bx      ; ax = ax + bx(4��pixel�ۥ[)
  
        shr eax, 2      ; eax /= 4
  
        mov [esi], al   ; �ҽk(����)�᪺pixel�s�^�h
        dec esi
        mov [esi], al
        sub esi, [ebp+12]
        mov [esi], al
        inc esi
        mov [esi], al
  
        inc esi         ; ���ܤU�@�ӥ��ҽk��pixel
  
        cmp ecx, 0
        jne loop1
        ; loop1����

    pop ecx
    add esi,[ebp+12]    ; ����U�@�C�~��
    cmp ecx, 0
    jne looph
    ; looph����

    pop ebx
    pop esi
    pop ebp
    ret
blur endp

end