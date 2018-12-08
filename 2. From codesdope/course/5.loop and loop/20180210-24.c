#include <stdio.h>
//https://www.codesdope.com/c-loop-and-loop/

int main()
{
    int num1 = 4;
    int num2 = 5;
    int num;

    num = (num1>num2) ? num2 : num1;
    printf ("The greater number is %d\n",num);
    return;
}
