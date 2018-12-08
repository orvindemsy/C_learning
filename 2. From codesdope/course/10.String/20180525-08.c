#include <stdio.h>
//https://www.codesdope.com/c-string/ number 8
//Exmaple of strcmp
int main()
{
    char s1[] = "Hello";
    char s2[] = "World";

    int i,j;
    i = strcmp(s1,"Hello");
    j = strcmp(s1,s2);
    printf("i = %d \nj = %d", i, j);
    return 0;
}
