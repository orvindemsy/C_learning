#include <stdio.h>

int main()
{
    int a,b;

    printf("Masukkan sebuah angka : ");
    scanf("%d",&a);

    printf("\nAngka itu adalah %d\n",a);

    if (a==3)
    {
        b = 4;
        printf("\nThis is an if case");
        printf("\nB is %d",b);
        if (b<5)
        {
            printf("\nB is less than 10");
        }
        b = 100;
        printf("\nCEK! B =100 but really, B is %d",b);
    }
    else
    {
        b = 0;
        printf("\nThis is an else case");
        printf("\nB is %d",b);
    }
    return 0;
}
