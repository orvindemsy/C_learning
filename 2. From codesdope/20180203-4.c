#include <stdio.h>

int count; /*this is global variable*/

void func1(void);
void func2(void);

int main()
{
    count = 100;
    func1();
    //func2();
    return 0;
}

void func1(void)
{
    int temp;
    temp = count;
    func2();
    printf("The value of count in this function :%d",temp);

}

void func2(void)
{
    int count;
    for(count=1; count<10; count++)
        putchar(',');

}
