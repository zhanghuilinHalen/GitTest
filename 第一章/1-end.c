/* 求长方形面积 */

#include <stdio.h>
int main(void){
    int width;
    int lenght;
    puts("求长方形的面积。");

    printf("长:");
    scanf("%d",&lenght);
    printf("宽:");
    scanf("%d",&width);
    printf("长方形的面积是%d",lenght*width);
    return 0;


}