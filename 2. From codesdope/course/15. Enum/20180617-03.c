#include <stdio.h>
//https://www.codesdope.com/c-enum/ number 1

enum days{
    mon,
    tue,
    wed,
    thu,
    fri
    };

    int main()
    {
        enum days d;
        d = wed;
        printf("%d",d+2);

        return 0;
    }
