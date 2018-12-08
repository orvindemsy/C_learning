#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ number 6

int main()
{
    float l,w;

    printf("Enter the length of rectangle\t\t:");
    scanf("%f",&l);

    printf("\nEnter the width of the rectangle\t:");
    scanf("%f",&w);

    float area = w*l;
    printf("\nThe area of rectangle is\t\t:%d",(int)area);

    return 0;
}
