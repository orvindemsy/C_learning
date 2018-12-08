#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ number1
int main()
{
    int num;
    char c;
    float dec;

    printf("\nEnter an integer:\n");
    scanf("%d",&num);

    printf("\nEnter a float number:\n");
    scanf("%f",&dec);

    printf("\nEnter an character:\n");
    scanf("% c",&c);

    //why cant I write my float last?
    printf("---------------------------------\n");
    printf("This is your integer :%d\n",num);

    printf("This is your character :%c\n",c);

    printf("This is yyour float number :%.2f",dec);
    printf("\n-------------------------------");
    return 0;
}

