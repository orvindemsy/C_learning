#include <stdio.h>
//https://en.wikipedia.org/wiki/Dereference_operator

int x;
int *p; //*is used in the declaration
        //p is a pointer to an integer, since (after dereferencing),
        //*p is an integer

x = 0;
//now x == 0;
p = &x; //&takes the address of x
//now p ==&x, so *p==x
*p = 1; //equivalent to x = 1, since *p==x
//now *p==1, and *p==x, so x=1
