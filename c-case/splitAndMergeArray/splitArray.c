#include <string.h>
#include <stdlib.h>

int getArrLen(int *arr);
int * splitArray(int *arr,const char *c);

int * splitArray(int *arr,const char *c)
{
    int i;
    int oddIndex = 0,evenIndex = 0;  // 分割后的奇数和偶数数组下标
    int len = getArrLen(arr);
    int * oddArr;
    int *evenArr;
    evenArr = (int *)malloc(sizeof(int) * len);
    oddArr = (int *)malloc(sizeof(int) * len);

    for(i = 0; i < len; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenArr[evenIndex] = arr[i];
            evenIndex++;
        }
        else
        {
            oddArr[oddIndex] = arr[i];
            oddIndex++;
        }
    }
    evenArr[evenIndex] = '\0';
    oddArr[oddIndex]= '\0';
    if(strcmp(c,"偶数") == 0){
        return evenArr;
    }
    else if(strcmp(c,"奇数") == 0){
        return oddArr;
    }

}

int getArrLen(int *arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}
