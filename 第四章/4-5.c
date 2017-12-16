/*按升序显示出小于输出值得所有正偶数*/
#include <stdio.h>
int main(void)
{
    int x; int t;
    printf("请输入一个整数:");
    scanf("%d",&x);
    t=2;
    while(t<x)
    {printf("%d ",t);
    t=t+2;}
    return 0;



}