#include <stdio.h>
#define area(r) (3.14*r*r)
//https://www.codesdope.com/c-preprocessor/ number 2
//macros with argument
int main()
{
    int radius;
    float area;
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    area = area(radius);
    printf("Area of circle is %.2n\n",area);

    return 0;
}
