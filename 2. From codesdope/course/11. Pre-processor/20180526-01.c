#include <stdio.h>
#define PI 3.14
//https://www.codesdope.com/c-preprocessor/ number 1
int main()
{
    int radius;
    float area;
    printf("Enter the radius :\n");
    scanf("%d",&radius);
    area = PI*radius*radius;
    printf("Area of circle is %.2f\n",area);
    return 0;
}
