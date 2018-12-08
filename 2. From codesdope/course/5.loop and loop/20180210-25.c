#include <stdio.h>
//https://www.codesdope.com/c-loop-and-loop/

int main()
{
    char ans='y';
    int num;

    while (ans=='y')
    {
        printf("Enter a number to check odd or even:\n");
        scanf("%d",&num);

        if(num%2==0)
        printf("\nYour number is even");
        else
        printf("\nYour number is odd");

        printf("\nDo you still want to do another check?(y/n)\n");
        scanf(" %c",&ans);
    }
    return 0;
}
