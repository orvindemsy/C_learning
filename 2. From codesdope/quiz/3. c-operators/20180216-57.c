#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 3 number 2
int main()
{
    int a,first,second,third,forth;

    printf("\nEnter 4 digits number : ");
    scanf("%d",&a);

    first = a/1000;
    first += 2;
    first = first%10;
    second = a%1000;

    second = a/100;
    second += 2;
    second = second%10;
    third = a%100;

    third = a/10;
    third += 2;
    third = third%10;
    forth = a%10;

    forth += 2;
    forth = forth%10;

    printf ("\n2 digits greate than the corresponding digits entered number %d%d%d%d \n", first, second, third, forth);

    return 0;
}
