#include <stdio.h>

extern void swap_use_temp(int *a, int *b);
extern void swap_no_use_temp(int *a, int *b);
extern void swap_use_xor(int *a, int *b);

int main()
{
    int re = 0;
    int a = 1, b = 2;

    /*  * 测试c-case中的swap函数，其中包括了三个函数，void swap_use_temp(int *a,int *b)
    * void swap_no_use_temp(int *a,int *b)和 void swap_use_xor(int *a, int *b)
*/
    printf("before swap a = %d, b = %d.\n",a,b);
    printf("swap_use_temp : ");
    swap_use_temp(&a, &b);
    printf("a = %d, b = %d.\n", a, b);


    printf("swap_no_use_temp: ");
    swap_no_use_temp(&a, &b);
    printf("a = %d, b = %d.\n", a, b);

    printf("swap_use_xor: ");
    swap_use_xor(&a, &b);
    printf("a = %d, b = %d.\n", a, b);

    return 0;
}