#include <stdio.h>
#include <stdlib.h>

int get_length(int *arr);
int * splitArray(int *arr);
void printArr(int *arr);

int main()
{
    int testArr[10] = {1,2,3,4,5,6,7,8,9};
    int * oddArr;
    oddArr = splitArray(testArr);
    printArr(oddArr);

    free(oddArr);
    oddArr = NULL;
    return 0;
}

int get_length(int *arr)
{
    int i = 0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}

int * splitArray(int *arr)
{
    int i;
    int evenIndex = 0;  // 分割后的奇数和偶数数组下标
    int len = get_length(arr);
    int *evenArr;
    evenArr = (int *)malloc(sizeof(int) * len);


    for(i = 0; i < len; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenArr[evenIndex] = arr[i];
            evenIndex++;
        }
    }
    evenArr[evenIndex] = '\0';
    return evenArr;
}

void printArr(int *arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        printf("%d ",arr[i]);
        i++;
    }
}
