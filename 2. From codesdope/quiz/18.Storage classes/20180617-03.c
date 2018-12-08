#include <stdio.h>
//https://www.codesdope.com/c-storage-classes/ example 3
//storage class number 3 : static
//A variable declared as static once initialized, exists till the end of the program
//If a static variable is declared inside a function, it remains into existence till
//the end of the program and not get destroyed as the function exists (as in auto).
//If a static variable is declared outside all the functions in a program
//it can be used only in the program in which it is declared and is not visible to other program files(as in extern).
static int g = 5;

void fn()
{
    int i = 0;
    printf("g = %d\t",g--);
    printf("i = %d\n",i++);
}

int main()
{
    while (g>=2)
    fn();
    return 0;
}
