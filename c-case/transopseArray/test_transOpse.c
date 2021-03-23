#include <stdio.h>

extern int *transOpse(int *oriArray,int row,int col);

int main()
{
    int i,j;
    int arr[2][3] = {
                        {1,2,3},
                        {4,5,6}
                    };
    int *arrPtr = &arr[0][0];
    int col = sizeof(arr[0]) / sizeof(int);
    int row = sizeof(arr) / sizeof(arr[0]);
    int *newArray = transOpse(arrPtr,row,col);
    
    for(i = 0; i < col; i++)
    {   
        for(j = 0; j < row; j++)
        {
            printf("%d",newArray[i*row+j]);
        }
        printf("\n");
    }
    return 0;
}