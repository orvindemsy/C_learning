#include <stdio.h>
//https://www.codesdope.com/c-enjoy-with-files/ number 4
//writing and writing on a file
int main()
{
    FILE *fr;
    char s[40],c;
    int a;
    fr = fopen ("Welcome.txt","w");
    printf("Enter string and number :\n");
    scanf("s &d",s, &a);
    fprintf(fr,"%s %d",s, a);
    fclose(fr);

    fr = fopen("Welcome.txt","r");
    //c = fgetc(fr);
    fscanf(fr,"%s %d", s, &a);
    printf("%s %d",s, a);
    fclose(fr);
    return 0;
}
