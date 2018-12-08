#include <stdio.h>
//https://www.codesdope.com/blog/article/printing-of-common-patterns-using-loop-in-c/
// right-angled triangle upward
int main()
{
    int a,b;
    for (a=1;a<=5;a++)
    {
        for (b=1;b<=a;b++)
        {
        printf("*");
        }
    printf("\n");
    }
    return 0;
}
