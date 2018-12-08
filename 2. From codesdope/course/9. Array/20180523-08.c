#include <stdio.h>
display(int *p)
{
    int i;
    for(i=0;i<8;++i)
    {
        printf("n[%d] = %d\n", i, *p);
        p++;
    }
}
int main()
{
    int n[ ] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    display(n);
    return 0;
}
