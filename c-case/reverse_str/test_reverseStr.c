#include <stdio.h>
#include <string.h>

extern char * reverseStr(char *c);
void printString(char *s);
int getStrLen(char *s);

int main()
{
    char c[10] = "abcdef";
    int length = getStrLen(c);
    printf("getStrLen of c is : %d.\n",length);
    printString(c);
    printf("reverse the string.\n");
    char *re_c = reverseStr(c);
    printString(re_c);
    return 0;
}

// 打印字符串
void printString(char *s)
{
    int i;
    for(i = 0; i <= strlen(s) - 1; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}

// 得到字符数组的长度。
int getStrLen(char *str)
{
    int len;
    int count = 0;
    while(*(str+count) != '\0')
    {
        count++;
    }
    return count;
}