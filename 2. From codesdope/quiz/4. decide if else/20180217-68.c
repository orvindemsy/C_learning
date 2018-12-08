#include <stdio.h>
//https://www.codesdope.com/practice/c-decide-ifelse/ level 3 number 2

int main()
{
    int x;
    printf("Enter number\n");
    scanf("%d",&x);

    int first_dig = x%10;
    int second_dig = (x/10)%10;
    int third_dig = (x/100)%10;
    int fourth_dig = (x/1000)%10;
    printf("\n----------------------\n");
    printf("new number : %d%d%d%d",first_dig,second_dig, third_dig, fourth_dig);
    return 0;
}
