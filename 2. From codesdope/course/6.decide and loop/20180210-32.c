#include<stdio.h>
// https://www.codesdope.com/c-decide-and-loop/ continue

int main()
{
    int a;
    for (a=1;a<=10;a++)
    {
        printf("Hello World\n");
        if (a==2)
        {
            //furhter statements will not be executed. Control will go to for
            continue;
        }
        printf("a is not 2\n");
    }
    return 0;
}
