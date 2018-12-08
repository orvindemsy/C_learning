#include <stdio.h>
//https://www.codesdope.com/c-enjoy-with-files/ number 1
//file open
int main()
{
    FILE *s, *t;
    s = fopen ("source.txt","r");
    t = fopen ("target.txt","w");

    char c;

    while(1)
    {

        c = fgetc(s);
        if(c!=EOF)
        {

            fputc(c,t);
        }
        else
            break;
    }

    fclose(s);
    fclose(t);
    return 0;
}
