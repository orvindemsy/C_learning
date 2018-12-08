#include <stdio.h>
//https://www.codesdope.com/c-string/ number 4
int main()
{
    char name[25];
    printf("Enter your name : \n");
    gets(name);

    printf("\nYour name is ");
    puts(name);
    return 0;
}
