/*从输入的整数开始倒数到1，输入值小于0时，不进行换行*/
#include <stdio.h>
int main(void)
{  
    int no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    while(no>0)
        printf("%d ",no--);
    return 0;
}