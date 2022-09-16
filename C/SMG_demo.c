#include<reg52.h>

#define unsigned init u16 
#define unsigned char u8

#define SMG_Arry[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
                      0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};

void delay(u16 z)
{
    u16 x,y;
    for(x=0;x<Z;x++)
    {
        for(y=0;y<125;y++);
    }

}

void main()
{
    while(1)
    {
        u16 i;
        for(i=0;i<16;i++)
        {
            P2 = SMG_Arry[i];
            delay(2000);
        }
       
    }
}