#include <stdio.h>
//https://www.codesdope.com/practice/c-loop-and-loop/ level 3 number 3
/*
Write a C program to print all prime number in between 1 to 100.
*/
int main()
{
       int a,b,c;

       for(a=2; a<=100; a++)
       {
           c=0;
           for(b=2; b<=a; b++)
           {
                if (a == b)  // Changed condition and reversed order of if:s
                    printf("%d\n",a);
                else if (a%b == 0)
                    break;
           }

        }

       return 0;
}
