#include <stdio.h>
//https://www.codesdope.com/blog/article/arguments-to-main-argc-and-argv/
//example 1
// argc and argv

int main(int argc, char *argv[])
{
    printf("%d\n",argc);
    printf("%s\n",argv[0]);
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);
    return 0;
}
