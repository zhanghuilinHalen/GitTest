/*计算输入的四个整数的最大值显示*/
#include <stdio.h>
int main(void)
{
    int n1,n2,n3,n4,m1,m2,max;
    puts("请输入四个整数。");
    printf("整数1:");
    scanf("%d",&n1);
    printf("整数2:");
    scanf("%d",&n2);
    printf("整数3:");
    scanf("%d",&n3); 
    printf("整数4:");
    scanf("%d",&n4); 
    m1=(n1>n2) ? n1:n2;
    m2=(n3>n4) ? n3:n4;
    max=(m1>m2) ? m1:m2;
    printf("最大值是%d\n",max);
    return 0;
    
}