#include <stdio.h>
//https://www.codesdope.com/c-decide-and-loop/ breaking the loop

int main()
{
    int a;
    for (a=1;a<=20;a++)
    {
        printf("Hi!\n");
        if(a==2)
            break;
    }
    return 0;
}
