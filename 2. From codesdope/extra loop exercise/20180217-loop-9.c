#include <stdio.h>
//https://www.codesdope.com/blog/article/printing-of-common-patterns-using-loop-in-c/  9
/* Cross
*****
 *****
  *****
   *****
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
        for(b=1; b<=a-1; b++)
            {
                printf(" ");
            }
        for(b=1; b<=height; b++)
            {
                printf("*");
            }
        printf("\n");
    }
}
