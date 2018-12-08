#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ number5

int main()
{
    int a,b;

    printf("COMPARING TWO NUMBERS\n");
    printf("Please enter the first number : ");
    scanf("%d",&a);
    printf("Please enter the second number : ");
    scanf("%d",&b);

    if(a==b)
        printf("\nThe numbers are the same\n");
    else
        printf("\nThe numbers aren't the same\n");

    return 0;
}
