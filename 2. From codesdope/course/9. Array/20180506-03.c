#include <stdio.h>
//https://www.codesdope.com/c-array/ ; example number 3,
//getting to know what is pointer to arrays
int main()
{
    float n[5]={20.4, 30.0, 5.8, 67, 15.2};
    float *p;
    int i;
    p = n;

    for(i=0;i<5;i++)
    {
        printf("The value of pointer *[p+%d] = %f\n\n", i, *(p+i)); //(p+i)means value at (p+0), p(+1)..
    }

    return 0;
}
