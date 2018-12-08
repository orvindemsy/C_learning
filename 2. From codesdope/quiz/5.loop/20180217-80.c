#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 3 number 7
/*
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
Write a C program to calculate factorial of a number.
*/
int main()
{
       int a,b,c=1;

       printf("\nEnter a number : ");
       scanf("%d",&a);

       for (b=1;b<=a;b++)
       {
           c=c*b;
       }

       printf("\nFactorial of %d is : %d", a, c);

       return 0;
}
