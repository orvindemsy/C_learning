#include <stdio.h>
//https://www.codesdope.com/practice/c-decide-ifelse/ level 2 number 1
int main()
{
    int a,b;

    printf("\nEnter the number of length : ");
    scanf("%d",&a);
    printf("|nEnter the number of breadth : ");
    scanf("%d",&b);

    if (a==b)
        printf("\nThis is rectangle, dude!\n");
    else
        printf("\nUnfortunately, this is not rectangle!\n");

    return 0;
}
