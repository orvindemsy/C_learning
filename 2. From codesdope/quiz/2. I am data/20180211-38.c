#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ number 5
//taking two integers from the user and print the sum and produc of them

int main()
{
    int a,b;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("\nEnter b : ");
    scanf("%d",&b);

    int sum = a + b;
    int prod = a * b;

    printf("\n-----------------\n");
    printf("The sum of them\t: %d\n", sum);
    printf("The product of them\t: %d\n", prod);
    return 0;

}
