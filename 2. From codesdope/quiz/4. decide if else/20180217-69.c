#include <stdio.h>
//https://www.codesdope.com/practice/c-decide-ifelse/ level 3 number 3

int main()
{
    char x;
    printf("\nPlease enter a character : ");
    scanf(" %c",&x);
    if (x>=97)
        printf("\nUPPERCASE! \n");
    else
        printf("\nLOWERCASE! \n");
    return 0;
}
