#include <stdio.h>

extern int getIntArrayLength(int *arr);
extern int findMaxVal(int *arr);
extern int findMaxValIndex(int *arr);

int main()
{
    int arr[10] = {1, 2, 3, 4, 9, 6, 7, 8};
    int *arrPtr = arr;
    printf("sizeof(arrptr) is %d .\n", sizeof(arrPtr));     // 4
    printf("sizeof(arr) is %d .\n", sizeof(arr));           // 40
    int max_num = findMaxVal(arr);
    int max_num_index = findMaxValIndex(arr);

    printf("the max number is %d. \n", max_num);
    printf("the max nunber's index is %d .\n", max_num_index);
    return 0;
}