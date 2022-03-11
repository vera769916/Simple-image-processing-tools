.model flat, C

.code

blur proc
	push ebp
    mov ebp, esp
    push esi
    push ebx
        
    mov ecx, [ebp+16]   ; 存取圖片高度

    mov esi, [ebp+8]    ; 存取圖片位址

looph:
    dec ecx
    dec ecx
    push ecx
    mov ecx, [ebp+12]   ; 存取圖片寬度
    loop1:
        dec ecx
        dec ecx
  
        xor eax, eax    ; eax清零
        xor ebx, ebx    ; ebx清零
        xor edx, edx    ; edx清零
        mov al, [esi]   ; al存標的pixel
        inc esi         ; 右移一pixel
        mov bl, [esi]   ; bl存標的右邊的pixel
        add ax, bx      ; ax = ax + bx
        dec esi
        add esi, [ebp+12]  ;下移一列 (i += width)
        mov bl, [esi]   ; bl存標的下面的pixel
        inc esi         ; 右移一pixel
        mov dl, [esi]   ; dl存標的右下的pixel
        add bx, dx      ; bx = bx + dx
        add ax, bx      ; ax = ax + bx(4個pixel相加)
  
        shr eax, 2      ; eax /= 4
  
        mov [esi], al   ; 模糊(平均)後的pixel存回去
        dec esi
        mov [esi], al
        sub esi, [ebp+12]
        mov [esi], al
        inc esi
        mov [esi], al
  
        inc esi         ; 移至下一個未模糊的pixel
  
        cmp ecx, 0
        jne loop1
        ; loop1結束

    pop ecx
    add esi,[ebp+12]    ; 移到下一列繼續
    cmp ecx, 0
    jne looph
    ; looph結束

    pop ebx
    pop esi
    pop ebp
    ret
blur endp

end