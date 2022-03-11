.model flat, C

.code

grow proc
    push ebp
    mov ebp, esp
    push ebx
        
    mov ecx, [ebp+20]   ;外圈height

    mov ebx, [ebp+12]   ;放大完的圖片存ebx
    mov edx, [ebp+8]    ;edx存圖片起始位址

looph:
    dec ecx
    push ecx
    mov ecx, [ebp+16]   ;內圈width
    loop1:
        dec ecx
   
        mov eax, [edx]  ;eax存原本圖片的pixel

        ;原本一格複製成2*2四格
        mov [ebx], eax  ;左上
        inc ebx
        mov [ebx], eax  ;右上
        dec ebx

        add ebx, [ebp+16]  ;加兩次原本的width到下一行
        add ebx, [ebp+16]

        mov [ebx], eax  ;左下
        inc ebx
        mov [ebx], eax  ;右下
        inc ebx

        sub ebx, [ebp+16]  ;減回去原本那行
        sub ebx, [ebp+16]
  
        inc edx         ;edx++準備複製下一個pixel
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