#include <stdio.h>
//https://www.codesdope.com/c-my-functions/ e.g.2
//function without return value

void display(int n) //function
{
    printf("\nNumber is %d\n", n);
}

int main()
{
        int c;
        printf("Enter number : \n");
        scanf("%d",&c);
        display(c); //calling the function display
        return 0;
}
