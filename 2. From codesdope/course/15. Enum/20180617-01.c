#include <stdio.h>
//https://www.codesdope.com/c-enum/ number 1
    enum season{
    Spring,
    Summer,
    Autumn,
    Winter,
    };

    int main()
    {
        enum season s;
        s = Summer;
        printf("%d\n",s);

        return 0;
    }
