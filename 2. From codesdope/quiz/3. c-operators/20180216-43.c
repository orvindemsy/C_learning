#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ number3
int main()
{
    int fordig;
    float result;

    printf("Enter a 4-digit number from keyboard : ");
    scanf("%d",&fordig);

    printf("\n---------------------------------------\n");

    result = (((fordig+8)/3)%5)*5;

    printf("The final result is  %.2f \n",result);

return 0;

}
