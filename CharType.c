#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char ch;
    int status;
    printf("请输入一个字符：");
    status=scanf("%c",&ch);
    if(status!=1)
    {
        printf("错误：输入无效，未能读取到字符\n");
        return 1;
    }
    int c;
    while((c=getchar())!='\n' && c!=EOF);/*防御性清空缓冲区，防止用户输入"abc"
    时，只读取了'a'，导致'b'和'c'留在缓冲区影响后续程序，循环读取到换行符或文件结束符
    为假，循环结束*/
    if(isupper(ch)){
        printf("字符'%c'属于大写字母\n",ch);
    }
    else if(islower(ch)){
         printf("字符'%c'属于小写字母\n",ch);
    }
    else if(isdigit(ch)){
        printf("字符'%c'属于数字\n",ch);
    }
    else{
        printf("字符'%c'属于其他字符\n",ch);
    }
    return 0;
}