#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ number 2
int main()
{
    int rad;
    float peri = 2*rad*22/7;
    float area = 22/7*rad;

    printf("input the value of radius: ");
    scanf("%d",&rad);

    printf("\n\nThe value of area\t: %.2f",area);
    printf("\nThe value of perimeter\t: %.2f\n",peri);

    return 0;
}
