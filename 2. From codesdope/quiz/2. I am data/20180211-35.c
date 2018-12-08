#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ number2
int main()
{
    float l,w,area;

    printf("Enter the length    :");
    scanf("%f",&l);

    printf("\nEnter the width   :");
    scanf("%f,",&w);

    area = l*w;

    printf("\nThe area of a rectangle is : %.2f",area);

    return 0;
    }
