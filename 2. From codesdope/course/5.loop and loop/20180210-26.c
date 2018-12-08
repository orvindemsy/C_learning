#include <stdio.h>
//https://www.codesdope.com/c-loop-and-loop/
int main()
{
    int a;
    int b;
    for(a=1, b=5; a<=5, b>=1; a++, b--)
    {
        printf("a=%d \t b=%d\n",a,b);
    }
    return 0;
}
