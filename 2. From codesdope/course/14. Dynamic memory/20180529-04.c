#include <stdio.h>
#include <stdlib.h>
//https://www.codesdope.com/c-dynamic-memory/ number 4
//calloc initializes the allocated memory to zero value whereas malloc doesn't.
//when this program is run, we get the values of zero.
int main()
{
    int n,i,*p;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    p=(int*)calloc(n, sizeof(int));
    if(p == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else{
      printf("Elements of array are\n");
      for(i=0;i<n;i++)
      {
        printf("%d\n",*(p+i));
      }
    }
    return 0;
}
