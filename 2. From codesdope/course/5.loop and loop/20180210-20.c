#include <stdio.h>
// https://www.codesdope.com/c-loop-and-loop/

int main()
{
    printf("Table of 12\n");
    int a;
    for(a=1;a<=10;a++)
    {
        int b=12;
        printf("12*%d = %d\n",a,b*a);
    }
}
