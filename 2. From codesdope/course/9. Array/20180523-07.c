#include <stdio.h>

float average(int n[],float size)
{
int i,sum=0;
float ave;

for (i=0;i<size;i++)
{
sum+=n[i];
}

ave=sum/size;
return ave;
}

int main()
{
int i,size;

printf("Enter the size of an array :");
scanf("%d",&size);

float n[size];
float b;
for(i=0;i<size;i++)
{
printf("Enter the value of n[i] : ",i);
scanf("%d",&n[i]);
}

b = average(n,size);

printf("\n============================\n");
printf("\nAverage is : %.2f", b);
return 0;
}
