#include <stdio.h>
#include <stdlib.h>
//free function is used to deallocate or free the memory after the program finishes which
//was dynamically allocated in the program. It is adviced to free the dynamically allocated
//memory after the program finishes so that it becomes available for future use.
int main()
{
    int n,i,*p;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    if(p == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
      printf("Enter elements of array:\n");
      for(i=0;i<n;++i)
      {
        scanf("%d",&*(p+i));
      }
      printf("Elements of array are\n");
      for(i=0;i<n;i++)
      {
        printf("%d\n",*(p+i));
      }
    }
    free(p);
    return 0;
}
