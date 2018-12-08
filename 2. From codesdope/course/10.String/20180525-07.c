#include <stdio.h>
//https://www.codesdope.com/c-string/ number 7
//Example of strcpy(s1,s2)
int main()
{
    char s1[]="Hello";
    char s2[]="World";

    strcat(s1,s2);

    printf("Source string = %s",s2);
    printf("\nTarget source = %s",s1);

    return 0;
}
