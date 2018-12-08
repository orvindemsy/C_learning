#include <stdio.h>
//https://www.codesdope.com/c-loop-and-loop/ bin to dec
int main()
{
    //decimal to binary convertor
    int num = 0,rem;
    long binary;
    printf("Enter the binary number\n");
    scanf("%li",&binary);
    int pow_of_two = 1;

    while(binary>0)
    {
        //taking the last digit of the binary
        rem = binary%10;
        //making decimal value
        //we have to multiply with powers of 2
        num = num + (rem*pow_of_two);

        binary = binary/10;
        //increasing power of 2
        pow_of_two = pow_of_two*2;
    }
    printf("%d\n",num);
    return 0;
}
