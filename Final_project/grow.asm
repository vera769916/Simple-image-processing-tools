.model flat, C

.code

grow proc
    push ebp
    mov ebp, esp
    push ebx
        
    mov ecx, [ebp+20]   ;�~��height

    mov ebx, [ebp+12]   ;��j�����Ϥ��sebx
    mov edx, [ebp+8]    ;edx�s�Ϥ��_�l��}

looph:
    dec ecx
    push ecx
    mov ecx, [ebp+16]   ;����width
    loop1:
        dec ecx
   
        mov eax, [edx]  ;eax�s�쥻�Ϥ���pixel

        ;�쥻�@��ƻs��2*2�|��
        mov [ebx], eax  ;���W
        inc ebx
        mov [ebx], eax  ;�k�W
        dec ebx

        add ebx, [ebp+16]  ;�[�⦸�쥻��width��U�@��
        add ebx, [ebp+16]

        mov [ebx], eax  ;���U
        inc ebx
        mov [ebx], eax  ;�k�U
        inc ebx

        sub ebx, [ebp+16]  ;��^�h�쥻����
        sub ebx, [ebp+16]
  
        inc edx         ;edx++�ǳƽƻs�U�@��pixel
        cmp ecx, 0
        jne loop1

    pop ecx
    add ebx, [ebp+16]
    add ebx, [ebp+16]
 
    cmp ecx, 0
    jne looph

    pop ebx  
    pop ebp
    ret
grow endp

end