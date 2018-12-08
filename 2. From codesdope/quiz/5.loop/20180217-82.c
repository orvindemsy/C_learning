#include <stdio.h>
//https://www.codesdope.com/practice/c-loop-and-loop/ level 3 number 1
/*
Calculate the sum of digits of a number given by user. E.g.-
INUPT : 123        OUPUT : 6
INUPT : 12345        OUPUT : 15
*/
int main()
{
    int a,b,c,total=0;

    printf("\nEnter a number : ");
    scanf("%d",&a);
    c=a;
    while(c!=0)
    {
        b=c%10;
        c=c/10;

        total=total+b;
    }

    printf("\nSum of the number is : %d", total);

    return 0;
}
