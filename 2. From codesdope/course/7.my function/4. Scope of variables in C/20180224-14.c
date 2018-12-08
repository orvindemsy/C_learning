#include <stdio.h>
https://www.codesdope.com/blog/article/scope-of-variables-in-c/ e.g.3
/*
Formal Parameters
*/

/*Global variable*/
int x = 10;

void fun1(int x)
{
    /*x is a formal parameter*/
    printf("%d\n",x);
}

int main()
{
    fun1(5);
}
