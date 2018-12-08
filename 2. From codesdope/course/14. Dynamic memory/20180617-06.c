#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://www.codesdope.com/c-dynamic-memory/ number 6
//using realloc to change the range of previously allocated memory

int main()
{
    char *p;
    int m1, m2;
    m1 = 10;
    m2 = 40;
    p = (char*)malloc(m1); //assign a memory space of 10 bytes which the pointer p1 is pointing to.
    strcpy(p,"Codesdope");
    p = (char*)realloc(p,m2); //allocating the previously assigned memory to 20 bytes
    strcat(p,"Practice Hooraaaay!");

    printf("%s",p);

    return 0;
}
