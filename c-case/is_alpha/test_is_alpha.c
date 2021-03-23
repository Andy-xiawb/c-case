#include <stdio.h>

extern int is_alpha(char c);
extern void is_alpha_2(char c);

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
    // 用三目运算符来判断输入的字符是不是字母。
    is_alpha_2(c);
    return 0;
}