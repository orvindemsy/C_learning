#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ number 4
//typecasting a float integer into int
int main()

{
    float b;

    printf("Enter any float number:\n");
    scanf("%f",&b);

    printf("----Type casting begin----\n");
    printf("\nThe typecast result is : %d",(int)b);

    return 0;
}
