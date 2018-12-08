#include <stdio.h>
//https://www.codesdope.com/c-storage-classes/ example 4
//storage class number 4 : register
//It tells the compiler that the variable will get stored in a register instead of memory (RAM).
//We can access a register variable faster than a normal variable.
//Not all the registers defined as register will get stored in a register
//since it depends on various restrictions of implementation and hardware.
int main()
{
    register int n=20;
    int *ptr;
    ptr =&n;
    printf("address of n : = %u",prt);  //can't be compiled because n doesn't have address

    return 0;
}
