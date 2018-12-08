#include <stdlib.h>
#include <string.h>
#include  <stdio.h>

//https://www.codesdope.com/c-dynamic-memory/ number 1

int main()
{
    char name[20];
    char *address;

    strcpy(name,"Orvin Demsy");
    address = (char*)malloc(50*sizeof(char));
    strcpy(address,"Greatest place on earth");

    printf("Name    : %s\n",name);
    printf("Address : %s",address);

    return 0;

}
