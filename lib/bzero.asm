    .export bzero

    .const frameb_arg1 = 0xc800 + 8 * 0
    .const frameb_arg2 = 0xc800 + 8 * 1
    .const ret_addr    = 0xc800 + 8 * 2

    ; void bzero(void *s, size_t n);
    .section text.bzero
bzero:
    mov a, pl
    mov b, a
    mov a, ph
    ldi pl, lo(ret_addr)
    ldi ph, hi(ret_addr)
    st  b
    inc pl
    st  a

    ; check if n is odd
    ldi ph, hi(frameb_arg2)
    ldi pl, lo(frameb_arg2)
    ld  a
    shr a
    ldi ph, hi(bzero_loop)
    ldi pl, lo(bzero_loop)
    jnc
    ; n is odd
    ; *s = 0
    ldi ph, hi(frameb_arg1)
    ldi pl, lo(frameb_arg1)
    ld  a
    inc pl
    ld  ph
    mov pl, a
    mov a, 0
    st  a
    ; s += 1
    ldi ph, hi(frameb_arg1)
    ldi pl, lo(frameb_arg1)
    ld  b
    inc pl
    ld  a
    inc b
    adc a, 0
    st  a
    dec pl
    st  b
    ; n -= 1
    ldi pl, lo(frameb_arg2)
    ld  b
    inc pl
    ld  a
    dec b
    sbb a, 0
    st  a
    dec pl
    st  b
    ; if n == 0 exit
    or  a, b
    ldi ph, hi(bzero_loop_end)
    ldi pl, lo(bzero_loop_end)
    jz

    ; two bytes at a time
bzero_loop:
    ; *s = 0
    ; *(s + 1) = 0
    ldi ph, hi(frameb_arg1)
    ldi pl, lo(frameb_arg1)
    ld  a
    inc pl
    ld  ph
    mov pl, a
    mov a, 0
    st  a
    inc pl
    adc ph, a
    st  a

    ; s += 2
    ldi ph, hi(frameb_arg1)
    ldi pl, lo(frameb_arg1)
    ld  b
    inc pl
    ld  a
    inc b
    adc a, 0
    inc b
    adc a, 0
    st  a
    dec pl
    st  b

    ; n -= 2
    ldi ph, hi(frameb_arg2)
    ldi pl, lo(frameb_arg2)
    ld  b
    inc pl
    ld  a
    dec b
    sbb a, 0
    dec b
    sbb a, 0
    st  a
    dec pl
    st  b

    ; if n != 0 continue
    or  a, b
    ldi ph, hi(bzero_loop)
    ldi pl, lo(bzero_loop)
    jnz

bzero_loop_end:
    ldi pl, lo(ret_addr)
    ldi ph, hi(ret_addr)
    ld  a
    inc pl
    ld  ph
    mov pl, a
    jmp
