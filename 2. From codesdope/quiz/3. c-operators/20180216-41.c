#include <stdio.h>
//https://www.codesdope.com/practice/c-operators/ number 1
int main()
{
    int length =5;
    int breadth =7;

    int perimeter = 2*(length+breadth);
    int area = length*breadth;

    printf("The area of the rectangle is \t\t: %d\n",area);
    printf("The perimeter of the rectabgle is \t: %d",(int)perimeter);

    return 0;
}

