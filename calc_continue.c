#include <stdio.h>
int main(void)
{
    double result;
    double num;
    char op;
    int first =1;
    printf("===== 计算器 =====\n");
    printf("输入q退出程序\n");
    while(1)
    {
        if(first)
        {
            printf("\n请输入数字:");
            if(scanf("%lf",&result)!=1)
            {
                break;
            }
            first=0;
        }
        else
        {
            printf("请输入运算符：");
            scanf(" %c",&op);
            printf("请输入数字：") ;
            if (scanf("%lf",&num)!=1)
            {
                break;
            }
            switch(op)
            {
                case'+':
                    result=result + num;
                    break;
                case'-':
                    result=result - num;
                    break;
                case'*':
                    result=result* num;
                    break;
                case'/':
                    if(num==0)
                    {
                        printf("错误,0不能为除数!");
                        continue;
                    }  
                    result=result/num;
                    break;
                default:
                    printf("无效运算符!\n");
                    continue;        
            }
        }
        printf("当前结果=%.2lf\n",result);
    }
    printf("\n程序退出\n");
    return 0;
}