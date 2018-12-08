#include <stdio.h>
//www.codesdope.com/practice/c-operators/ number4
int main()
{
    int input;
    int a,b,c;

    printf("\nEnter three-digit number : ");
    scanf("%d",&input);

    printf("\n-----------------------------\n");
    a = input/100;
    input = input%100;

    b = input/10;
    input = input%10;

    c = input/1;

    printf("\nThe reverse of entered number : %d%d%d\n", c,b,a);

}
