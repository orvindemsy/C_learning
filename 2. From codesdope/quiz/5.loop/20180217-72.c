#include <stdio.h>
//https://www.codesdope.com/practice/c-loop-and-loop/ level 2 number 2
//Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.
int main()
{
    int a;
    char b;

    for (a=0;a<=255;a++)
    {
        printf("\n ASCII : %d || Character : %c ", a, a);
    }

    return 0;
}
