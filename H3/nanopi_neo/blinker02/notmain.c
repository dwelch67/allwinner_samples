
//-------------------------------------------------------------------
//-------------------------------------------------------------------

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern void ASMDELAY ( unsigned int );

#define PA_CFG0 0x01C20800
#define PA_CFG1 0x01C20804
#define PA_CFG2 0x01C20808
#define PA_CFG3 0x01C2080C
#define PA_DAT  0x01C20810

#define TMR0_IRQ_EN_REG     (0x01C20C00+0x00)
#define TMR0_IRQ_STA_REG    (0x01C20C00+0x04)
#define TMR0_CTRL_REG       (0x01C20C00+0x10)
#define TMR0_INTV_VALUE_REG (0x01C20C00+0x14)
#define TMR0_CUR_VALUE_REG  (0x01C20C00+0x18)

//-------------------------------------------------------------------------
int notmain ( unsigned int sp )
{
    unsigned int ra;
    unsigned int x;

    ra=GET32(PA_CFG1);
    ra&=(~(7<<8));
    ra|=(1<<8);
    PUT32(PA_CFG1,ra);
    x=GET32(PA_DAT);
    x&=(~(1<<10));
    //x^=(1<<10);

    PUT32(TMR0_IRQ_EN_REG,0);
    PUT32(TMR0_IRQ_STA_REG,0);
    PUT32(TMR0_INTV_VALUE_REG,24000000-1);
    ra=GET32(TMR0_CTRL_REG);
    PUT32(TMR0_CTRL_REG,ra|(1<<1));
    PUT32(TMR0_CTRL_REG,ra|(1<<0));
    
    while(1)
    {
        x^=(1<<10);
        PUT32(PA_DAT,x);
        while(1)
        {
            ra=GET32(TMR0_IRQ_STA_REG);
            if(ra&(1<<0)) break;
        }
        PUT32(TMR0_IRQ_STA_REG,1);
    }
    return(0);
}
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//-------------------------------------------------------------------
