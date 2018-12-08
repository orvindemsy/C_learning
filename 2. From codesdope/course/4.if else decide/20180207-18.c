#include<stdio.h>
 // If else
 // https://www.codesdope.com/c-decide-ifelse/
int main()
{
    int age;
    printf ("Enter your age : ");
    scanf ("%d",&age);

    if (age>=18)
    {
        printf ("\nYour age is 18+");
        printf ("\nEligible to vote\n");
    }
    else{
        printf ("\nYour age is below 18");
        printf ("\nYou are not eligible to vote\n");
    }
    return 0;
}
