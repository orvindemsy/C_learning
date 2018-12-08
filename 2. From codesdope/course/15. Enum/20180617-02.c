#include <stdio.h>
//https://www.codesdope.com/c-enum/ number 1

enum days {
    mon,
    tue=5,
    wed,
    thu,
    fri
    };

int main()
{
    enum days d;
    d = thu;
    printf("%d",d);

    return 0;
}
