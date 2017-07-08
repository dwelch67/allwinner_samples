
//-------------------------------------------------------------------
//-------------------------------------------------------------------

.globl _start
_start:
    b reset
    b hang
    b hang
    b hang
    b hang
    b hang
    b hang
    b hang

reset:
    ldr x0,stacktop
    mov sp,x0

    mov x0,sp
    bl notmain
hang: b hang
stacktop: .dword 0x42008000

.globl PUT32
PUT32:
  str w1,[x0]
  ret

.globl GET32
GET32:
    ldr w0,[x0]
    ret

.globl GETPC
GETPC:
    mov x0,x30
    ret

.globl mpidr
mpidr:
    mrs x0,mpidr_el1
    ret

.globl getel
getel:
    mrs x0, CurrentEL
    ret


//-------------------------------------------------------------------
//-------------------------------------------------------------------
