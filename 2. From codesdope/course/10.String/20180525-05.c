#include <stdio.h>
//https://www.codesdope.com/c-string/ number 5
//Pasing strings to Functions


void display(char string[])
    {
        printf("\n");
        printf("Your input string is :\n");
        puts(string);
    }

int main()
    {
        char a[25];
        printf("Enter your string : \n");
        gets(a);
        display(a);

        return 0;
    }

