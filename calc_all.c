#include <stdio.h>
int main()
{
    float a,b;
    char op;
    printf("请输入计算：") ;
    scanf("%f%c%f",&a,&op,&b);
    switch(op)
    {
        case'+':printf("结果=%.2f\n",a+b);break;
        case'-':printf("结果=%.2f\n",a-b);break;
        case'*':printf("结果=%.2f\n",a*b);break;
        case'/':
            if(b==0)
                printf("0不能为除数");
            else
                printf("结果=%.2f\n",a/b);
            break;
        default:printf("运算符错误\n");  
    }
    return 0;
}