#include <stdio.h>
//https://www.codesdope.com/practice/c-loop-and-loop/ level 3 number 2
/*
A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
Write all Armstrong numbers between 100 to 500.
*/
int main()
{
    int a,b,c,total;
    //a=100;
    for(a=100; a<=500; a++)
    {
        total=0;
        c=a;
        while(c!=0)
        {
            b=c%10;
            c=c/10;

            total=total+(b*b*b);
        }
        if(total==a)
        {
            printf("\n%d\n",a);
        }
        //printf("\n%d \n",a);
    }

    return 0;
}
