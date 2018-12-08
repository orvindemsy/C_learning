#include <stdio.h>
//https://www.codesdope.com/c-my-functions/ e.g.1
/*
float average( int num1, int num2 ); - We have declared that we
 have defined a function named 'average' in our program so that,
 'main' function can search for it while calling that function 'main'.
*/

float average(int num1, int num2);

int main()
{
        int num1,num2;
        float c;
        printf("Enter first number : \n");
        scanf("%d",&num1);
        printf("Enter first number : \n");
        scanf("%d",&num2);

        c = average(num1,num2);
        printf("\nAverage : %.2f",c);
        return 0;
}

float average(int num1, int num2)
{
    float avg;
    avg = (num1+num2)/2.0;
    return avg;
}
