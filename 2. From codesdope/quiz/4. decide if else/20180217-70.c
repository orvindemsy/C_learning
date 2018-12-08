#include <stdio.h>
//https://www.codesdope.com/practice/c-decide-ifelse/ level 3 number 4

int main()
{
    int age;
    char sex;

    printf("\nPlease enter your age : ");
    scanf(" %d",&age);

    printf("\nPlease enter your sex (F/M) : ");
    scanf(" %c",&sex);

    printf("\n--------------------------------\n");
    if (sex=='F')
        printf("\nYou will work in urban areas\n");
    else if(sex=='M' && age>=20 && age<40)
        printf("\nYou may work anywhere");
    else if(sex=='M' && age<=60 && age>=40)
        printf("\nYou will work in urban areas only\n");
    else
        printf("\nThe input data is invalid\n");

    printf("\n---------------------------------\n");
    return 0;
}
