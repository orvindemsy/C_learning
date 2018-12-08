#include <stdio.h>
//https://www.codesdope.com/c-array/ example number 1

int main()
{
    int marks[3];
    float average;
    printf("Enter the mark of the first student : ");
    scanf("%d",&marks[0]);

    printf("Enter the mark of the second student :");
    scanf("%d",&marks[1]);

    printf("Enther the mark of the third student :");
    scanf("%d",&marks[2]);

    average = marks[0]+marks[1]+marks[2]/3.0;
    printf("\nAverage marks : %f\n", average);

    return 0;
}
