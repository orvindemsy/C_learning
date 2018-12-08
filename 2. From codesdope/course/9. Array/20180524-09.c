#include <stdio.h>

int main()
{
int marks[3][2];
int i,j;

for(i=0;i<3;i++)
{
printf("Student %d\n ",i+1);

for (j=0;j<2;j++)
{
printf("Marks of subject %d : ",j+1);
scanf("%d",&marks[i][j]);
}
printf("\n");
}

printf("============================================\n");
for(i=0;i<3;i++)
{
printf("Student %d \n ",i+1);

for (j=0;j<2;j++)
{
printf("Marks of subject %d : %d",j+1,marks[i][j]);
}
printf("\n");
}
}
