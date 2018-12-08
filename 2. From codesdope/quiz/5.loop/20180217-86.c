#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 3 number 5
/*
Write a C program to find prime factor of a number.
If a factor of a number is prime number then it is its prime factor.
*/
int main()
{
    int a,i,j;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=2; i<=a; i++)
    {
        for (j=2; j<=i; j++)
        {
            if(i==j && a%i==0)
                printf("%d\n",i);
            else if (i%j==0)
                break;
        }
    }
    return 0;
}
