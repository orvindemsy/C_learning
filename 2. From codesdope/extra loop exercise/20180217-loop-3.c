#include <stdio.h>
//https://www.codesdope.com/blog/article/printing-of-common-patterns-using-loop-in-c/  3
/* Triangle
   *
   ***
  *****
 *******
*********
*/
int main()
{
    int a,b;
    int height;

    printf("\nEnter height : ");
    scanf("%d",&height);
    printf("\n===================\n");
    for (a=1;a<=height;a++)
    {
        //counting number of spaces
        for(b=1; b<=height-a; b++)
            {
                printf(" ");
            }
        //number of stars
        for(b=1; b<=(2*a)-1; b++)
            {
                printf("*");
            }
        printf("\n");
    }
}
