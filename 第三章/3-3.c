#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数:");
    scanf("%d",&no);
    if (no==0)
       puts("绝对值是0");
    else if(no>0)
        printf("绝对值是%d",no);
        else
        printf("绝对值是%d",-no);
        return 0;

    
}