#include <stdio.h>
//https://www.codesdope.com/c-storage-classes/ example 2
//storage class number 2 : extern
//extern is a global varibale declared ouside any function
//it can be accessed by any function
int g;
void print()
{
    g = 10;
    printf("g inside print function %d\n",g);
}

int main()
{
    g = 7;
    printf("g inside main function %d\n",g);
    print();
    return 0;
}
