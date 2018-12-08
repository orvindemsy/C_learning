#include <stdio.h>

float average(float n[])
{
int i;
float average,sum;
sum=0;
for(i=0;i<8;i++)
{
sum+= n[i];
}

average = sum/8.0;
return average;
}

int main()
{
float b,n[]={ 20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8 };
b = average(n);

printf("\nThe average is : %.2f\n",b);
return 0;
}
