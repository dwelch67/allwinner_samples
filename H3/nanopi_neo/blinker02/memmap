
MEMORY
{
    ram : ORIGIN = 0x42000000, LENGTH = 0x1000
    /*ram : ORIGIN = 0x44000, LENGTH = 0x1000*/
    /* ram : ORIGIN = 0x000, LENGTH = 0x1000*/
}

SECTIONS
{
    .text : { *(.text*) } > ram
    .bss : { *(.bss*) } > ram
    .data : { *(.data*) } > ram
}

