#include <stdio.h>
//https://www.codesdope.com/c-point-me/
//example 3, using the call by value method, not call by reference
//this method will pass the copied value of variables as function's arguments.

int swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    printf("After swapping inside of function\n\n");
    //printf("Value of t : %d",t);
    printf("Value of a : %d\n",a);
    printf("Value of b : %d\n",b);

}

int main()
{
    int num1,num2;

    printf("Enter you first value : ");
    scanf("%d",&num1);

    printf("Enter your second value : ");
    scanf("%d",&num2);

    printf("---------------------------------\n");
    swap(num1,num2);

    printf("\nAfter swapping outside of function\n\n");
    printf("Value of num1 : %d\n",num1);
    printf("Value of num2 : %d\n",num2);

    return 0;
}
