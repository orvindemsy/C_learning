#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ level 3 number 3
int main()
{
    int a,b;
    float c,d;

    printf ("\nHow many items will you purchase?\n");
    scanf("%d",&a);
    b=a*100;
    if(b>=1000)
    {
        b=b*0.9;
        printf("\nCongrats you got a discount : %d\n",b);
    }
    else
    {
        b=b;
        printf("\nThis is your total cost : %d\n",b);
    }
    return 0;
}
