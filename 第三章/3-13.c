/*现实所输入月份所处季节*/
#include <stdio.h>
int main(void)
{
    int m;
    printf("请输入月份:");
    scanf("%d",&m);
    if(m>=1&&m<=12)
     switch(m/3){
      case 0 :printf("%d月是冬季。\n",m);  break;
      case 1 :printf("%d月是春季。\n",m);  break;
      case 2 :printf("%d月是夏季。\n",m);  break;
      case 3 :printf("%d月是秋季。\n",m);  break;
      case 4 :printf("%d月是冬季。\n",m);  break;
    }
    else
       printf("%d月不存在！！\a\n",m);
       return 0;
}