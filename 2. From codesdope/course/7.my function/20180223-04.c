#include <stdio.h>
//https://www.codesdope.com/c-my-functions/  Calling a function inside another e.g.4

int div2(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void div6(int b)
{
    if(div2(b)==1 && b%3==0)
    {
        printf("\nYour number is divisible by 6\n");
    }
    else
    {
        printf("\nYour number is not divisible by 6\n");
    }
}

int main()
{
    div6(12);
    div6(25);
    return 0;
}
