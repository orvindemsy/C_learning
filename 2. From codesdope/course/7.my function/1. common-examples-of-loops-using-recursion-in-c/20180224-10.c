#include <stdio.h>
//https://www.codesdope.com/c-my-functions/ Recursion e.g.5
//writing program for a factorial
int factorial(int a)
{
    if (a==0 || a==1)
    {
        return 1;
    }

    else
        return a*factorial(a-1);

}

int main()
{
    int b;
    printf("\nEnter a number : ");
    scanf("%d",&b);

    int fact = factorial(b);
    printf("\nFactorial of %d is %d\n", b, fact);

    return 0;
}
