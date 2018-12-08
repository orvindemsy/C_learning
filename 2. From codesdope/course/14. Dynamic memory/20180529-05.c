#include <stdio.h>
#include <stdlib.h>
//https://www.codesdope.com/c-dynamic-memory/ number 5
//calloc initializes the allocated memory to zero value whereas malloc doesn't.
//when this program is run, we get an error, because malloc doesn't initialize any value.
int main()
{
    int n,i,*p;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*   sizeof(int));
    if(p == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
      printf("Elements of array are\n");
      for(i=0;i<n;i++)
      {
        printf("%d\n",*(p+i));
      }
    }
    return 0;
}
