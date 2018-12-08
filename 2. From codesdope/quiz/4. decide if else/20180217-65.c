#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 2 number 9
int main()
{
    float a,b,c;
    float d,e;

    printf("\nATTENDACE CHECK\n");

    printf("Please enter the number of classes you have : ");
    scanf("%f",&a);
    printf("Please tne number of classes you attended : ");
    scanf("%f",&b);

    d = (b/a)*100;
    printf("\n-------------------------------------------\n");
    printf("Percentage of attendace : %2.f %%\n",d);

    if(d<=75)
        printf("\nYou are not permitted to sit in the exam\n");
    else
        printf("\nYou are allowed to sit in the exam\n");


    return 0;
}
