/*显示输入整数所有约数并显示约数个数*/
#include <stdio.h>
int main(void)
{
    int i,n,a;
    printf("整数值：");
    scanf("%d",&n);
    a=0;
    for(i=1;i<=n;i++)
      if(n%i==0)
       { printf("%d",i);
    putchar('\n');
    ++a;}
    printf("%d",a);
}