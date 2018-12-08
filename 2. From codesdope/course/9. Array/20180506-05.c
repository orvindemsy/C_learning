#include <stdio.h>
//https://www.codesdope.com/c-array/ ; example number 5
//passing array as an argument to a function

void display(int a)
{
    printf("%d\n", a);
}

int main()
{
    int n[]={20, 30, 23, 4, 5, 2, 42, 8};
    display(n[2]);

    return 0;
}
