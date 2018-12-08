#include <stdio.h>
//https://www.codesdope.com/blog/article/scope-of-variables-in-c/ e.g.2
/*
Global Variables
*/

/*Global variable*/
int x = 10;

void fun1()
{
    /*local variable of same name*/
    int x = 5;
    printf("%d\n",x);
}

int main()
{
    printf("%d\n",x);
    fun1();
}
float average(int num1, int num2)
{
    float avg;
    avg = (num1+num2)/2.0;
    return avg;
}
