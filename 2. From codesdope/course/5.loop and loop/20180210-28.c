#include <stdio.h>
//https://www.codesdope.com/c-loop-and-loop/ decimal to binary

int main()
{
    //decimal to binary convertor
    int num,rem;
    printf("Enter the number\n");
    scanf("%d",&num);

    long binary = 0, i=1;

    while(num>0)
    {
        rem = num%2;
        num = num/2;

        binary = binary + (rem*i);
        i = i*10;
    }
    printf("%li\n",binary);
    return 0;
}
