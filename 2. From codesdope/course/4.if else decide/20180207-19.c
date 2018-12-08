#include<stdio.h>
 // other form of if else
 // https://www.codesdope.com/c-decide-ifelse/

int main()
{
    int age;
    printf ("\nEnter your age : ");
    scanf ("%d",&age);

    (age>18)? printf ("\nYou are eligible to vote") : printf ("\nYou're not eligible to vote");
    return 0;
}
