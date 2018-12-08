#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ number5
int main()
{
    int fordig;
    float result;

    printf("Enter a 4-digit number from keyboard : ");
    scanf("%d",&fordig);

    printf("\n---------------------------------------\n");

    fordig += 8;
    fordig /= 3;
    fordig %= 5;
    fordig *= 5;

    printf("The final result is  %d \n",fordig);

return 0;

}
