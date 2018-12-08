#include <stdio.h>
#include <string.h>
//https://www.codesdope.com/c-string/ number 6
//Example of strlen
//strlen doesn't count '\0' while calculating the length of string.
int main()
{
    char a[]="Orvin Demsy";
    int len1, len2;
    len1 = strlen(a);
    len2 = strlen("Hello World");

    printf("\nThe length of %s is : %d\n",a,len1);
    printf("\nThe length of %s is : %d\n","Hello World",len2);

    return 0;
}
