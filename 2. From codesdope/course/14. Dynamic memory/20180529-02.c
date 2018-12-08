#include <stdio.h>
#include <stdlib.h>
//https://www.codesdope.com/c-dynamic-memory/ number 2
int main()
{
    int i,n,*p;
    printf("Enter then number of array : \n");
    scanf("%d",&n);
    p = (int*)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("The memory allocation is insufficient");
    }
    else
    {
        printf("Enter the value of integer : \n");
            for (i=0; i<n ;++i) //why is it okay to use ++i?? It could work even if I dont use &*
            scanf("%d",&*(p+i)); //what is this &*
    }
    printf("These are the value of array :\n");
        for (i=0; i<n ;i++)
        printf("%d\n",*(p+i));

    return 0;


}
