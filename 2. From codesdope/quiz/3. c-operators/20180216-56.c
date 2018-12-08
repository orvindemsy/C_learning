#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ level 3 number 1
int main()
{
    int a;
    printf("\nEnter 5 digit of a number : ");
    scanf("%d",&a);

    int first, second, third, forth;
    first = a/10000;
    a = a%10000;

    second = a/1000;
    a = a%1000;

    third = a/100;
    a = a%100;

    forth = a/10;
    a = a%10;

    printf("\nThe sum of first and forth number is : %d\n",first+forth);

    return 0;
}
