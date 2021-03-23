#include <stdlib.h>

extern int getArrLen(int *arr);

int * mergeArr(int * arr1,int *arr2)
{
    int *newArr;
    int i,j;
    int index = 0;
    int arr1Len = getArrLen(arr1);
    int arr2len = getArrLen(arr2);
    newArr = (int*)malloc(sizeof(int) * (arr1Len+arr2len+1));
    for(i = 0; i < arr1Len; i++)
    {
        newArr[index] = arr1[i];
        index++;
    }

    for(j = 0; j < arr2len; j++)
    {
        newArr[index] = arr2[j];
        index++;
    }
    newArr[index] = '\0';
    return newArr;
}
