#include<stdio.h>
 // taken from codesdope, c-lets-start page2

 int main()
 {
     float a;
     int b;
     char ch;

     printf("Enter decimal value of a     : ");
     scanf(" %f" ,&a);

     printf("\nEnter integer value of b     : ");
     scanf(" %d" ,&b);

     printf("\nEnter character value of c   : ");
     scanf(" %c" ,&ch); //<-- you need to add space to %c

     printf("\nThe value of a is            : %f" ,a);
     printf("\nThe value of b is            : %d" ,b);
     printf("\nThe value of c is            : %c" ,ch);
     printf("\nThe value of rounded a is    : %.2f" ,a);

     return 0;

 }

