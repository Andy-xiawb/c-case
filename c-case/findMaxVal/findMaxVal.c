#include <stdio.h>

int findMaxVal(int *arr);
int findMaxValIndex(int *arr);
int getIntArrayLength(int *arr);



int findMaxVal(int *arr)
{
    int max,i;
    max = arr[0];
//    int length = sizeof(arr);   // 这里需要注意的是sizeof（arr）的值是4，因为它是一个指针，指针的大小就是4、
    int length = getIntArrayLength(arr);
/*
    for(i = 1; i < length; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        //用三目运算符实现。
        
    }
*/

//  用三目运算符实现。
    for(i = 1; i < length; i++)
    {
        max = (max < arr[i])? arr[i] : max;
    }
    return max;
}

// findMaxValIndex用来返回最大的那个元素的下标
int findMaxValIndex(int *arr)
{
    int index = 0;
    int max = arr[0];
    int i;
    int length = getIntArrayLength(arr);
    for(i = 1; i < length; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    return index + 1;
}

int getIntArrayLength(int *arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}