#include <stdio.h>
//https://www.codesdope.com/blog/article/printing-of-common-patterns-using-loop-in-c/  10
/* Cross
1
12
123
1234
12345
1234
123
12
1
*/
int main()
{
    int a,b,c=1;
    int height;
    //number of line equal to number of heights
    printf("\nEnter height : ");
    scanf("%d",&height);
    printf("\n===================\n");
    for (a=1;a<=height;a++)
        {
        //counting number of spaces
        for(b=1; b<=a; b++)
            {
                printf("%d",b);
            }
        printf("\n");
        }
    for(a=height;a>=1;a--)
        {
            for(b=1;b<a;b++)
            {
                printf("%d",b);
            }
        printf("\n");
        }

    return 0;
}
