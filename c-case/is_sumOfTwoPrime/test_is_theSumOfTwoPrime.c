#include <stdio.h>

extern int is_prime(int n);
extern int is_theSumOfTwoPrime(int n);

int main()
{
    int test_num = 0;
    int re = 0;  //用来保存判断的结果。是1，表示是两个素数的和，不是1的话，就不是。

    printf("input a int num: ");
    scanf("%d",&test_num);
    printf("\n");

    re = is_theSumOfTwoPrime(test_num);
    if(re == 1)
    {
        printf("%d is the sum of two prime number . \n",test_num);
    }
    else
    {
        printf("%d is not the sum of two prime number . \n",test_num);
    }
    return 0;
}