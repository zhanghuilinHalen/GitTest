/*对整形常量、浮点型常量、int变量和double变量进行乘除运算*/

#include <stdio.h>
int main(void)
{
    int  x,y;
    double  a,b;

    x=3;
    y=2;
    a=3;
    b=2;
    printf("x*y=%d\n",x*y);
    printf("x/y=%d\n",x/y);
    printf("a*b=%f\n",a*b);
    printf("a/b=%f\n",a/b);
    printf("3*2=%d\n",3*2);
    printf("3/2=%d\n",3/2);
    printf("3.0*2=%f\n",3.0*2);
    printf("3.0/2=%f\n",3.0/2);
    return 0;
    }