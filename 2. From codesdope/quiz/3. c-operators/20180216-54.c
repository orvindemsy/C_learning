#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 3 number 3
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

    printf("\nThe sum of each digit : %d\n", a+b+c);

    return 0;

}
