#include <stdio.h>
//https://www.codesdope.com/c-my-functions/ Recursion e.g.3
//Multiplication table using recursion
int mul_table (int a, int b)
{
    printf("%d \n", a*b);
    if(b!=10)
        mul_table(a,b+1);
}

int main()
{
    mul_table(5,1);
    return 0;
}
