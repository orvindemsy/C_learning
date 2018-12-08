#include <stdio.h>
//https://www.codesdope.com/blog/article/printing-of-common-patterns-using-loop-in-c/  7
/* Cross
*****
*   *
*   *
*   *
*****
*/
int main()
{
    int a,b;
    int height;
    //number of line equal to number of heights
    printf("\nEnter height : ");
    scanf("%d",&height);
    printf("\n===================\n");
    for (a=1;a<=height;a++)
    {
        //counting number of spaces
        for(b=1; b<=height; b++)
            {
                if (a==1 || a==5 || b==height-4 || b==height )
                    printf("*");
                else
                    printf(" ");
            }
        printf("\n");
    }
}
