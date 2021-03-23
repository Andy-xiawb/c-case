#include <stdio.h>
#include <stdlib.h>

extern int getArrLen(int *arr);
extern int * splitArray(int *arr,char *c);
extern int * mergeArr(int * arr1,int *arr2);

void printArr(int *arr);

int main()
{
    int testArr[10] = {1,2,3,4,5,6,7,8,9};
    int * evenArr;
    int * oddArr;
    oddArr = splitArray(testArr,"奇数");
    evenArr = splitArray(testArr,"偶数");
    printf("偶数数列为： ");
    printArr(evenArr);
    printf("奇数数列为： ");
    printArr(oddArr);


    int *newMergeArr;
    newMergeArr = mergeArr(evenArr,oddArr);
    printArr(newMergeArr);

    free(oddArr);
    free(evenArr);
    free(newMergeArr);
    return 0;
}

void printArr(int *arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}
