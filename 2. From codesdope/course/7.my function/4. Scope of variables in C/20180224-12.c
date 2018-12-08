#include <stdio.h>
//https://www.codesdope.com/blog/article/scope-of-variables-in-c/ e.g.1
/*
Local Variables

*/

void fun1()
{
    /*local variable of function fun1*/
    int x = 4;
    printf("%d\n",x);
}

int main()
{
    /*local variable of function main*/
    int x = 10;
    {
        /*local variable of this block*/
        int x = 5;
        printf("%d\n",x);
    }
    printf("%d\n",x);
    fun1();
}
