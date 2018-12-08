#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 3 number 3a
/*
*
**
***
****
*/
int main()
{
    int a;
    int b;

    for (a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
        printf("*");
        }
        printf("\n");
    }
}
