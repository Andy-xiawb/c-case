#include <stdio.h>

extern int is_alpha(char c);
int main()
{
    char c;
    printf("请输入一个字符： ");
    scanf("%c",&c);
    printf("\n");
    int re = is_alpha(c);
    if(re == 1)
    {
        printf("是字母！\n");
    }
    else
    {
        printf("不是字母！\n");
    }
    return 0;
}