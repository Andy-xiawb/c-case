#include <stdio.h>
extern int sum(int a,int b);
int main()
{
    int re = 0;
    int a = 1, b = 2;
    re = sum(a,b);
    printf("re = %d.\n",re);
    return 0;
}