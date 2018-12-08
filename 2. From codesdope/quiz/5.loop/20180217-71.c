#include <stdio.h>
//https://www.codesdope.com/practice/c-loop-and-loop/ level 2 number 1
//Take 10 integers from keyboard using loop and print their average value on the screen.

int main()
{
    int a,b,sum;
    a=0;
    float ave;
    while (a<=10)
    {
        printf("\nEnter a number : ");
        scanf("%d",&b);
        a++;
        sum+=b;
    }

    ave = sum/10;

    printf("\n==============================");
    printf("\nTotal sum\t\t : %d", sum);
    printf("\nThe average of numbers  : %.2f", ave);
    printf("\n==============================");

    return 0;
}
