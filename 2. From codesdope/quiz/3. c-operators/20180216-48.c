#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ number6
int main()
{
    int a;
    int b;

    printf("Masukkan nilai a : ");
    scanf("%d",&a);

    printf("Masukkan nilai b : ");
    scanf("%d",&b);

    if(a<=50 || a<b)
        printf("\n-TRUE-");
    else
        printf("\n-FALSE-\n");

    return 0;

}
