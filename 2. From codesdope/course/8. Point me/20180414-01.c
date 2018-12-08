#include <stdio.h>
//https://www.codesdope.com/c-point-me/
//example 1
int main()
{
  int a = 10;
  int *p;
  p = &a;
  printf("p = %u\n", p); //address of a
  //printf("p = %d\n", p);
  printf("*p = %d\n",*p); //value of a which is pointed by pointer p
  //printf("*p = %u\n",*p);
  printf("&p = %u\n",&p); //address of p
  //printf("&p = %d\n",&p);
  printf("*&p = %u\n", *&p); // see what is inside the address of p, which is the address of a


  return 0;
}

/*Result Explanation
As discussed earlier, 'p' is a pointer to 'a'. 'a' has the value of 10.
So, '*p' will be 10. 'p' will store address of a. Thus, p = 2383619684
would imply that 2383619684 is the address of 'a'. Now, '&p' represents
address of 'p'. So, it is 2383619688. Notice that it is 4 more than the
address of 'a' since int is of 4 bit and so is 'a'. Now, '*&p' will be
the value of '&p' and the value of '&p' is the address of 'a'. So, it is 2383619684.

%u' is used for memory address to give unsigned (positive) values.
Value of address will vary every time you run because everytime a new memory will be allocated.
*/
