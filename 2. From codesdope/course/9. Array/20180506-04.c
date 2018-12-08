#include <stdio.h>
//https://www.codesdope.com/c-array/ ; example number 4,
//comparing address of array an the value inside the pointer_safety

int main()
{
    int n[4]={20,30,5,67};
    int *p;
    int i;
    p = n; //p is a integer pointer of an array n
    //printing the address of array

    printf("The address of n[4] is %u\n\n", p); //the value store in the p

    for (i=0;i<4;i++)
    {
        printf("Address of n[%d] is %u\n", i, &n[i]); //the value of address of each array n
    }

    return 0;
}
