#include <string.h>

char* reverseStr(char *str)
{
    char c;
    // strlen(str) 用来得到str这个字符串的长度。 要string.h这个头文件。
    int i = 0, j = strlen(str) - 1;
    
    // 反转的主要过程：在i < j的情况下，交换字符数组中的两头的值就好了。
    while(i < j)   
    {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
        i++;
    }
    return str;
}