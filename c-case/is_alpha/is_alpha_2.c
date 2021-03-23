#include <stdio.h>
/*
    * 使用三目运算符来判断是否是字母。
*/
void is_alpha_2(char c)
{
    ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))? (printf("%c is alpha.\n",c)) : (printf("%c is not a alpha.\n",c));
}