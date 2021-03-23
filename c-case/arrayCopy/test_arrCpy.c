#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void arrCpy(char *str1,char *str2,int length);

int main()
{
    char oriArr[10] = "abcdef";
    int length = strlen(oriArr);
    char *cpyArr;
    cpyArr = (char *)malloc(sizeof(char) * length);
    arrCpy(oriArr,cpyArr,length);
    
    printf("original array is : ");
    printArr(oriArr);
    printf("copied array is : ");
    printArr(cpyArr);

    cpyArr[2] = '3';
    printf("original array is : ");
    printArr(oriArr);
    printf("copied array is : ");
    printArr(cpyArr);

    // 但是如果给一个指针，指向原始数组，改变指针的值，那么原始数组也会变化。
/*
    下面这段程序的结果为：
    original array is : abcdef0
    copied array is : abcdef0
*/

    char * cpyArr2 = NULL;
    cpyArr2 = oriArr;
    cpyArr2[6] = '0';
    printf("original array is : ");
    printArr(oriArr);
    printf("copied array is : ");
    printArr(cpyArr2);


    free(cpyArr);
    return 0;
}

void printArr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}