#include <stdio.h>
//https://www.codesdope.com/c-typedef/ example 1
//using typedef to substitute unsigned integer
int main()
{
    typedef unsigned int ui;
    ui j = 5, k = 10;

    printf("The value of j and k are %d and %d\n",j, k);

    return 0;
}
