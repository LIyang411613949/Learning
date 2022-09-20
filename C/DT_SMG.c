#include <reg520.h>

typedef unsigned int uint
typedef unsigned char uchar

sbit SMG_IN A = P3^1
sbit SMG_IN B = P3^2
Sbit SMG_IN C = P3^3

void delay(uint)
{
    uint--;
}

void SMG_dispaly(uint i)
{
    if(i=0;i<8;i++)
    {
        switch(i)
        {
            case 0: SMG_ IN A = 0;SMG_IN B = 0;SMG_IN C = 0; break;
            case 1: SMG_ IN A = 1;SMG_IN B = 0;SMG_IN C = 0; break;
            case 2: SMG_ IN A = 0;SMG_IN B = 1;SMG_IN C = 0; break;
            case 3: SMG_ IN A = 1;SMG_IN B = 1;SMG_IN C = 0; break;
            case 4: SMG_ IN A = 0;SMG_IN B = 0;SMG_IN C = 1; break;
            case 5: SMG_ IN A = 1;SMG_IN B = 0;SMG_IN C = 1; break;
            case 6: SMG_ IN A = 0;SMG_IN B = 1;SMG_IN C = 1; break;
            case 7: SMG_ IN A = 1;SMG_IN B = 1;SMG_IN C = 1; break;
        }
    }

}

void main()
{
    while(1)
    {
        SMG_dispaly();
        delay(10000);
        
    }
}