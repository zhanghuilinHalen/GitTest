#include <stdio.h>
int main(void)
{
    int a,b;
    puts("请输入两个整数。");
    printf("整数a:");
    scanf("%d",&a);
    printf("整数b:");
    scanf("%d",&b);
    printf("a是b的%f%%。",(double) a/b*100);
    return 0;
}
    