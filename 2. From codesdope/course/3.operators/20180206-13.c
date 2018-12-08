#include<stdio.h>
 // taken from codesdope, c-lets-start, increment and decrement operators
 /*While both a++ and ++a increases the value of 'a', the only difference between these is that a++ returns the value of 'a' before
 the value of 'a' is incremented and ++a first increases the value of 'a' by 1
 and then returns the incremented value of 'a'.*/
int main()
{
    int a = 15, b = 15, c = 15, d = 15;

    printf("\nvalue of a++ = %d", a++);
    printf("\nvalue of ++b = %d", ++b);
    printf("\nvalue of c-- = %d", c--);
    printf("\nvalue of --d = %d", --d);

    return 0;
 }
