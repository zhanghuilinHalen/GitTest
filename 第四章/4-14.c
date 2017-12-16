#include <stdio.h>
int main(void)
{
    int no,i,x;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    for(i=1;i<=no/10;i++)
        printf("1234567890");
        for(x=1;x<=no%10;x++)
        printf("%d",x);
    putchar('\n');
    return 0;
}