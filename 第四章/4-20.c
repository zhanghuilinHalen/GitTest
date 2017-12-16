/*显示九九乘法表，增加横纵标题*/
#include <stdio.h>
int main(void)
{
    puts("  | 1  2  3  4  5  6  7  8  9");
    puts("-----------------------------");
    int i,j;
    for(i=1;i<=9;i++){ 
        printf("%2d|",i);
        for(j=1;j<=9;j++)
         
          printf("%3d",i*j);
          putchar('\n');
        }  
    return 0;
}