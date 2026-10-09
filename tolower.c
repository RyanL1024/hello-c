#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    if (scanf("%c",&ch)!=1)
    {
        printf("输入异常\n");
        return 1;
    }
    ch= isupper(ch)?tolower(ch):ch;
    printf("%c",ch);
    return 0;
}