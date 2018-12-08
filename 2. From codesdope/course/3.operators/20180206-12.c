#include<stdio.h>
 // taken from codesdope/c-operators/ assignment operators
int main()
{
    int a = 25;
    int b = 8;
    a+=b;
    printf("%d\n",a);
    a-=b;
    printf("%d\n",a);
    a*=b;
    printf("%d\n",a);
    a/=b;
    printf("%d\n",a);
    a%=b;
    printf("%d\n",a);
    return 0;
}
