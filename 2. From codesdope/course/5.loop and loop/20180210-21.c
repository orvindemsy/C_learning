#include <stdio.h>
// another type of if hex->dec

int main()
{
    //nt b=2;
    int a,i,rem,pow;
    int power=1, temp=0;
    long num1;
    int num;
    a=0;
    printf("Please enter the binary:\n");
    scanf("%li",&num);
    //scanf("%d",&num);

    while(num!=0){
        //num1=num1/10;
        rem=num%10;
           temp=temp+(power*rem);

        num=num/10;
            power=power*2;
    }
    printf("\n\n%d yeaay\n",temp);

    return 0;

}
