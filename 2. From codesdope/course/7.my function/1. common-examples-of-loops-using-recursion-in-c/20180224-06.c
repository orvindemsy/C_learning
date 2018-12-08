#include <stdio.h>
//https://www.codesdope.com/blog/article/common-examples-of-loops-using-recursion-in-c/ e.g.1
//using recursion value

int sum_int(int a)
{
    if (a==1)
        return a;
    else
        return a+sum_int(a-1);
}

int main()
{
    printf("\n %d\n", sum_int(4));
    return 0;
}
