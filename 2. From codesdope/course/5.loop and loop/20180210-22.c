#include <stdio.h>
// https://www.codesdope.com/blog/article/common-conditional-examples-in-c/

int main()
{
    int a,b,c;

    printf("Enter first number    :");
    scanf("%d",&a);
    printf("\nEnter second number   :");
    scanf("%d",&b);
    printf("\nEnter third number    :");
    scanf("%d",&c);

    printf("--------------------------------\n");
    if(a==b&&b==c)
    {
        printf("Numbers are equal\n");
    }
    else
    {
        if(a>b&&a>c)
            printf("%d is the greatest\n",a);
        else if(b>a&&b>c)
            printf("%d is the greatest\n",b);
        else
            printf("%d is the greatest\n",c);
    }
    return 0;
}
