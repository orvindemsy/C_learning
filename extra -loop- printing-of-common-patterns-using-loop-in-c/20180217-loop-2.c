#include <stdio.h>
//https://www.codesdope.com/blog/article/printing-of-common-patterns-using-loop-in-c/  2
/*
*****
****
***
**
*
*/
int main()
{
    int a,b;

    for (a=5;a>=1;a--)
    {
        for (b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
}
