#include <stdio.h>
#include <stdlib.h>

int *transOpse(int *oriArray,int row,int col);
int *transOpse(int *oriArray,int row,int col)
{
    int *newArray = (int *)malloc(row*col*sizeof(int));
//    int * newArray = oriArray;
    int i,j;
    for(i = 0 ; i < row;i++)
    {
        for(j = 0; j < col; j++)
        {
            newArray[j*row+i] = oriArray[i*col+j];
        }
    }
    return newArray;
}