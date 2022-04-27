#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
 
/* 要生成和返回随机数的函数 */
int * getRandom( )
{
   static int  r[10];
   int i;
 
   /* 设置种子 */
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < 10; ++i)
   {
      r[i] = rand();
      printf("这是数组r的第%d个值%d\n", i,r[i] );
   }
 
   return r;
}
 
/* 要调用上面定义函数的主函数 */
int main ()
{
   /* 一个指向整数的指针 */
   int *p;
   int j;
 
   p = getRandom();
   for ( j = 0; j < 10; j++ )
   {
       printf("*(p + [%d]) : %d\n", j, *(p + j) );
   }
 
   return 0;
}
