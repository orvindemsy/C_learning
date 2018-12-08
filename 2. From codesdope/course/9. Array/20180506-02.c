#include <stdio.h>
//https://www.codesdope.com/c-array/ example 2 using loop to put the integer value to variable
int main()
{
    int i,j;
    int n[10];

    //initializing the value of array
    for (i=0;i<10;i++)
    {
        printf("Enter the value of n[%d] : ",i);
        scanf("%d",&n[i]);
    }

    printf("-----------------------------------\n");
    //printing the value of array
    for (j=0;j<10;j++)
    {
        printf("The value of n[%d] is : %d\n", j, n[j]);
    }

    return 0;
}
