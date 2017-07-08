
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
#define PB_CFG0 0x01C20824
#define PB_CFG1 0x01C20828
#define PB_CFG2 0x01C2082C
#define PB_CFG3 0x01C20830
#define PB_DAT  0x01C20834
#define PC_CFG0 0x01C20848
#define PC_CFG1 0x01C2084C
#define PC_CFG2 0x01C20850
#define PC_CFG3 0x01C20854
#define PC_DAT  0x01C20858
#define PD_CFG0 0x01C2086C
#define PD_CFG1 0x01C20870
#define PD_CFG2 0x01C20874
#define PD_CFG3 0x01C20878
#define PD_DAT  0x01C2087C
#define PE_CFG0 0x01C20890
#define PE_CFG1 0x01C20894
#define PE_CFG2 0x01C20898
#define PE_CFG3 0x01C2089C
#define PE_DAT  0x01C208A0
#define PF_CFG0 0x01C208B4
#define PF_CFG1 0x01C208B8
#define PF_CFG2 0x01C208BC
#define PF_CFG3 0x01C208C0
#define PF_DAT  0x01C208C4
#define PG_CFG0 0x01C208D8
#define PG_CFG1 0x01C208DC
#define PG_CFG2 0x01C208E0
#define PG_CFG3 0x01C208E4
#define PG_DAT  0x01C208E8
#define PH_CFG0 0x01C208FC
#define PH_CFG1 0x01C20900
#define PH_CFG2 0x01C20904
#define PH_CFG3 0x01C20908
#define PH_DAT  0x01C2090C
#define PI_CFG0 0x01C20920
#define PI_CFG1 0x01C20924
#define PI_CFG2 0x01C20928
#define PI_CFG3 0x01C2092C
#define PI_DAT  0x01C20930
#define PJ_CFG0 0x01C20944
#define PJ_CFG1 0x01C20948
#define PJ_CFG2 0x01C2094C
#define PJ_CFG3 0x01C20950
#define PJ_DAT  0x01C20954
#define PK_CFG0 0x01C20968
#define PK_CFG1 0x01C2096C
#define PK_CFG2 0x01C20970
#define PK_CFG3 0x01C20974
#define PK_DAT  0x01C20978
#define PL_CFG0 0x01C2098C
#define PL_CFG1 0x01C20990
#define PL_CFG2 0x01C20994
#define PL_CFG3 0x01C20998
#define PL_DAT  0x01C2099C

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
    while(1)
    {
        x^=(1<<10);
        PUT32(PA_DAT,x);
        ASMDELAY(0x20000000);
        //ASMDELAY(0x20000);
    }
    return(0);
}
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//-------------------------------------------------------------------
