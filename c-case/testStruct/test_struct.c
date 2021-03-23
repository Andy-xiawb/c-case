#include <stdio.h>


int main()
{
    struct student
    {
        char c;
        int score[10];
    };
    struct student stu1;

    printf("size of struct is %d.\n",sizeof(stu1));  // 结果是40
    return 0;
}


