#include <stdio.h>
int main(void)
{
    int no;
    int flag=1;
    printf("正整数：");
    scanf("%d",&no);
    if(no<0){
        printf("error");
        return 0;
    }
    while(no){
        if(flag){
            putchar('+');
            flag = 0;
        }
            
        else {
            putchar('-');
            flag = 1;
        }
        no--;
    }
    return 0;
}