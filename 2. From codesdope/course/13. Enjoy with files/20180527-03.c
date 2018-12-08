#include <stdio.h>
//https://www.codesdope.com/c-enjoy-with-files/ number 3
//writing and writing on a file
int main()
{
    FILE *fr;
    fr = fopen("Hello.txt.","r");
    char c;
    while (c!=EOF)
    {
        c = fgetc(fr); /* read fom a file */
        printf("%c",c); /*display on screen) */
    }
    fclose(fr);
    return 0;
}
