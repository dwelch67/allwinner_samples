
//-------------------------------------------------------------------
//-------------------------------------------------------------------

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern void ASMDELAY ( unsigned int );
extern void uart_init(void);
extern void hexstrings ( unsigned int );
extern void hexstring ( unsigned int );
extern unsigned int MIDR ( void );
extern unsigned int ID_PFR0 ( void );
extern unsigned int ID_PFR1 ( void );
extern unsigned int ID_DFR0 ( void );
extern unsigned int ID_AFR0 ( void );
extern unsigned int CPACR ( void );
extern unsigned int FPSID ( void );
extern unsigned int ID_ISAR0 ( void );

//-------------------------------------------------------------------------
int notmain ( unsigned int sp )
{
    uart_init();
    hexstring(0x12345678);
    hexstring(sp);
    hexstring(MIDR());
    hexstring(ID_PFR0());
    hexstring(ID_PFR1());
    hexstring(ID_DFR0());
    hexstring(ID_AFR0());
    hexstring(CPACR());
    hexstring(ID_ISAR0());
    hexstring(FPSID());
    hexstring(0x12345678);

    hexstrings(0x01F01C00+0x0000); hexstring(GET32(0x01F01C00+0x0000));
    hexstrings(0x01F01C00+0x0040); hexstring(GET32(0x01F01C00+0x0040));
    hexstrings(0x01F01C00+0x0044); hexstring(GET32(0x01F01C00+0x0044));
    hexstrings(0x01F01C00+0x0048); hexstring(GET32(0x01F01C00+0x0048));
    hexstrings(0x01F01C00+0x0080); hexstring(GET32(0x01F01C00+0x0080));
    hexstrings(0x01F01C00+0x0084); hexstring(GET32(0x01F01C00+0x0084));
    hexstrings(0x01F01C00+0x0088); hexstring(GET32(0x01F01C00+0x0088));
    hexstrings(0x01F01C00+0x00c0); hexstring(GET32(0x01F01C00+0x00c0));
    hexstrings(0x01F01C00+0x00c4); hexstring(GET32(0x01F01C00+0x00c4));
    hexstrings(0x01F01C00+0x00c8); hexstring(GET32(0x01F01C00+0x00c8));
    hexstrings(0x01F01C00+0x0100); hexstring(GET32(0x01F01C00+0x0100));
    hexstrings(0x01F01C00+0x0104); hexstring(GET32(0x01F01C00+0x0104));
    hexstrings(0x01F01C00+0x0108); hexstring(GET32(0x01F01C00+0x0108));
    hexstrings(0x01F01C00+0x0140); hexstring(GET32(0x01F01C00+0x0140));
    hexstrings(0x01F01C00+0x0144); hexstring(GET32(0x01F01C00+0x0144));
    hexstrings(0x01F01C00+0x0184); hexstring(GET32(0x01F01C00+0x0184));
    hexstrings(0x01F01C00+0x01a0); hexstring(GET32(0x01F01C00+0x01a0));
    hexstrings(0x01F01C00+0x0280); hexstring(GET32(0x01F01C00+0x0280));
    hexstrings(0x01F01C00+0x0284); hexstring(GET32(0x01F01C00+0x0284));
    hexstrings(0x01F01C00+0x0288); hexstring(GET32(0x01F01C00+0x0288));

    
    return(0);
}
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//-------------------------------------------------------------------
