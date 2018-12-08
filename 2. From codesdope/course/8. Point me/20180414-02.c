#include <stdio.h>
//https://www.codesdope.com/c-point-me/
//example 2
void swap (int *a, int *b)
    {
        int t;
        t = *a;
        *a = *b;
        *b = t;
    }

int main()
    {
        int num1, num2;
        printf("Enter first number : ");
        scanf("%d",&num1);

        printf("Enter second number :");
        scanf("%d",&num2);

        swap(&num1, &num2);
        printf("\n");
        printf("The first number is : %d\n", num1);
        printf("The second number is : %d\n", num2);

        return 0;
    }
