
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

    //hexstrings(0x01C20000+0x0060); hexstring(GET32(0x01C20000+0x0060));
    //hexstrings(0x01C20000+0x0064); hexstring(GET32(0x01C20000+0x0064));
    //hexstrings(0x01C20000+0x0068); hexstring(GET32(0x01C20000+0x0068));
    //hexstrings(0x01C20000+0x006C); hexstring(GET32(0x01C20000+0x006C));
    //hexstrings(0x01C20000+0x0070); hexstring(GET32(0x01C20000+0x0070));

    hexstrings(0x01C20000+0x0000); hexstring(GET32(0x01C20000+0x0000));
    hexstrings(0x01C20000+0x0008); hexstring(GET32(0x01C20000+0x0008));
    hexstrings(0x01C20000+0x0010); hexstring(GET32(0x01C20000+0x0010));
    hexstrings(0x01C20000+0x0018); hexstring(GET32(0x01C20000+0x0018));
    hexstrings(0x01C20000+0x0020); hexstring(GET32(0x01C20000+0x0020));
    hexstrings(0x01C20000+0x0028); hexstring(GET32(0x01C20000+0x0028));
    hexstrings(0x01C20000+0x0038); hexstring(GET32(0x01C20000+0x0038));
    hexstrings(0x01C20000+0x0044); hexstring(GET32(0x01C20000+0x0044));
    hexstrings(0x01C20000+0x0048); hexstring(GET32(0x01C20000+0x0048));
    hexstrings(0x01C20000+0x0050); hexstring(GET32(0x01C20000+0x0050));
    hexstrings(0x01C20000+0x0054); hexstring(GET32(0x01C20000+0x0054));
    hexstrings(0x01C20000+0x0058); hexstring(GET32(0x01C20000+0x0058));
    hexstrings(0x01C20000+0x005C); hexstring(GET32(0x01C20000+0x005C));
    hexstrings(0x01C20000+0x0060); hexstring(GET32(0x01C20000+0x0060));
    hexstrings(0x01C20000+0x0064); hexstring(GET32(0x01C20000+0x0064));
    hexstrings(0x01C20000+0x0068); hexstring(GET32(0x01C20000+0x0068));
    hexstrings(0x01C20000+0x006C); hexstring(GET32(0x01C20000+0x006C));
    hexstrings(0x01C20000+0x0070); hexstring(GET32(0x01C20000+0x0070));
    hexstrings(0x01C20000+0x0074); hexstring(GET32(0x01C20000+0x0074));
    hexstrings(0x01C20000+0x0080); hexstring(GET32(0x01C20000+0x0080));
    hexstrings(0x01C20000+0x0088); hexstring(GET32(0x01C20000+0x0088));
    hexstrings(0x01C20000+0x008C); hexstring(GET32(0x01C20000+0x008C));
    hexstrings(0x01C20000+0x0090); hexstring(GET32(0x01C20000+0x0090));
    hexstrings(0x01C20000+0x009C); hexstring(GET32(0x01C20000+0x009C));
    hexstrings(0x01C20000+0x00A0); hexstring(GET32(0x01C20000+0x00A0));
    hexstrings(0x01C20000+0x00A4); hexstring(GET32(0x01C20000+0x00A4));
    hexstrings(0x01C20000+0x00B0); hexstring(GET32(0x01C20000+0x00B0));
    hexstrings(0x01C20000+0x00B4); hexstring(GET32(0x01C20000+0x00B4));
    hexstrings(0x01C20000+0x00B8); hexstring(GET32(0x01C20000+0x00B8));
    hexstrings(0x01C20000+0x00C0); hexstring(GET32(0x01C20000+0x00C0));
    hexstrings(0x01C20000+0x00CC); hexstring(GET32(0x01C20000+0x00CC));
    hexstrings(0x01C20000+0x00F4); hexstring(GET32(0x01C20000+0x00F4));
    hexstrings(0x01C20000+0x00FC); hexstring(GET32(0x01C20000+0x00FC));
    hexstrings(0x01C20000+0x0100); hexstring(GET32(0x01C20000+0x0100));
    hexstrings(0x01C20000+0x0118); hexstring(GET32(0x01C20000+0x0118));
    hexstrings(0x01C20000+0x0120); hexstring(GET32(0x01C20000+0x0120));
    hexstrings(0x01C20000+0x0124); hexstring(GET32(0x01C20000+0x0124));
    hexstrings(0x01C20000+0x0130); hexstring(GET32(0x01C20000+0x0130));
    hexstrings(0x01C20000+0x0134); hexstring(GET32(0x01C20000+0x0134));
    hexstrings(0x01C20000+0x013C); hexstring(GET32(0x01C20000+0x013C));
    hexstrings(0x01C20000+0x0140); hexstring(GET32(0x01C20000+0x0140));
    hexstrings(0x01C20000+0x0144); hexstring(GET32(0x01C20000+0x0144));
    hexstrings(0x01C20000+0x0150); hexstring(GET32(0x01C20000+0x0150));
    hexstrings(0x01C20000+0x0154); hexstring(GET32(0x01C20000+0x0154));
    hexstrings(0x01C20000+0x015C); hexstring(GET32(0x01C20000+0x015C));
    hexstrings(0x01C20000+0x01A0); hexstring(GET32(0x01C20000+0x01A0));
    hexstrings(0x01C20000+0x0200); hexstring(GET32(0x01C20000+0x0200));
    hexstrings(0x01C20000+0x0204); hexstring(GET32(0x01C20000+0x0204));
    hexstrings(0x01C20000+0x0220); hexstring(GET32(0x01C20000+0x0220));
    hexstrings(0x01C20000+0x0224); hexstring(GET32(0x01C20000+0x0224));
    hexstrings(0x01C20000+0x0228); hexstring(GET32(0x01C20000+0x0228));
    hexstrings(0x01C20000+0x022C); hexstring(GET32(0x01C20000+0x022C));
    hexstrings(0x01C20000+0x0230); hexstring(GET32(0x01C20000+0x0230));
    hexstrings(0x01C20000+0x0234); hexstring(GET32(0x01C20000+0x0234));
    hexstrings(0x01C20000+0x023C); hexstring(GET32(0x01C20000+0x023C));
    hexstrings(0x01C20000+0x0244); hexstring(GET32(0x01C20000+0x0244));
    hexstrings(0x01C20000+0x0248); hexstring(GET32(0x01C20000+0x0248));
    hexstrings(0x01C20000+0x0250); hexstring(GET32(0x01C20000+0x0250));
    hexstrings(0x01C20000+0x0260); hexstring(GET32(0x01C20000+0x0260));
    hexstrings(0x01C20000+0x0280); hexstring(GET32(0x01C20000+0x0280));
    hexstrings(0x01C20000+0x0284); hexstring(GET32(0x01C20000+0x0284));
    hexstrings(0x01C20000+0x0288); hexstring(GET32(0x01C20000+0x0288));
    hexstrings(0x01C20000+0x028C); hexstring(GET32(0x01C20000+0x028C));
    hexstrings(0x01C20000+0x0290); hexstring(GET32(0x01C20000+0x0290));
    hexstrings(0x01C20000+0x029C); hexstring(GET32(0x01C20000+0x029C));
    hexstrings(0x01C20000+0x02A4); hexstring(GET32(0x01C20000+0x02A4));
    hexstrings(0x01C20000+0x02A8); hexstring(GET32(0x01C20000+0x02A8));
    hexstrings(0x01C20000+0x02C0); hexstring(GET32(0x01C20000+0x02C0));
    hexstrings(0x01C20000+0x02C4); hexstring(GET32(0x01C20000+0x02C4));
    hexstrings(0x01C20000+0x02C8); hexstring(GET32(0x01C20000+0x02C8));

    //hexstrings(0x01C20000+0x02CC); hexstring(GET32(0x01C20000+0x02CC));
    
    hexstrings(0x01C20000+0x02D0); hexstring(GET32(0x01C20000+0x02D0));

    //hexstrings(0x01C20000+0x02D4); hexstring(GET32(0x01C20000+0x02D4));

    hexstrings(0x01C20000+0x02D8); hexstring(GET32(0x01C20000+0x02D8));
    hexstrings(0x01C20000+0x02F0); hexstring(GET32(0x01C20000+0x02F0));
    hexstrings(0x01C20000+0x0300); hexstring(GET32(0x01C20000+0x0300));
    hexstrings(0x01C20000+0x0304); hexstring(GET32(0x01C20000+0x0304));



    return(0);
}
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//-------------------------------------------------------------------
