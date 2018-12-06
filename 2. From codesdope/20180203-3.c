#include <stdio.h>

int is_in(char *s, char c)
{
    while(*s)
        if(*s==c) return 1;
        else s++;
    return 0;
//what is argument? why can't I run this program?
}
