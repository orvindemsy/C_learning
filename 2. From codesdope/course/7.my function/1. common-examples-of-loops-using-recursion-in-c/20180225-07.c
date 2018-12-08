#include <stdio.h>
#include <math.h>
//https://www.codesdope.com/blog/article/common-examples-of-loops-using-recursion-in-c/ e.g.2
//Sum of all the digits of a number using recursion

int sum_digits(int a)
{
    //calculate the number of digits in a number
    int num_digits = ((int)log10(a))+1;
    if (num_digits==1)
        return a;
    else
        return a%10+sum_digits(a/10);
}

int main()
{
    printf("%d\n",sum_digits(54321));
    return 0;
}

