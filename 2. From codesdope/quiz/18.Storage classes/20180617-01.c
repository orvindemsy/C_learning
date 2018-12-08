#include <stdio.h>
//https://www.codesdope.com/c-storage-classes/ example 1
//storage class number 1 : auto
//by default, variables declared within a function is categorized as this type
int sum(int a, int b)
{
    auto int s;
    s = a + b;
    return s;
}
int main()
{
    int n1,n2,s;
    n1 = 5;
    n2 = 3;
    s = sum(n1,n2);
    printf("Sum of two variables = %d\n",s);

    return 0;
}
