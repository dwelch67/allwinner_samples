
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
extern unsigned int mpidr ( void );
extern unsigned int getel ( void );
//-------------------------------------------------------------------------
int notmain ( unsigned int sp )
{
    uart_init();
    hexstring(0x12345678);
    hexstring(sp);
    hexstring(mpidr());
    hexstring(getel());
    return(0);
}
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//-------------------------------------------------------------------
