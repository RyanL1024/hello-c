#include <stdio.h>
int main(void)
{
    double result;
    double num;
    char op;
    int first =1;//标记变量，1表示是第一次输入，0表示不是第一次
    printf("===== 计算器 =====\n");
    printf("输入q退出程序\n");
    while(1)/*无限循环，1在C语言中代表“真”，永远成立*/
    {
        if(first)
        {
            printf("\n请输入数字:");//第一次输入第一个数字
            if(scanf("%lf",&result)!=1)
            /*防御型编程，scanf函数的返回值是成功匹配并赋值的输入项的个数。
            先前定义result为double型，非double型变量无法赋。
            故不合法输入返回值为零，仅需令返回值不为零即可*/
            {
                break;
            }
            first=0;//first变成0，程序开始在else分支里跑
        }
        else
        {
            printf("请输入运算符：");
            scanf(" %c",&op);
            /*%c前需空格，第一个输入需回车，隐含一个转义字符n，会被%c读走。
            空格代表忽略空白字符直到找到非空白字符*/
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
                        //立即终止循环，跳回开头开始下一次循环，不执行除法运算，让用户重新输入
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