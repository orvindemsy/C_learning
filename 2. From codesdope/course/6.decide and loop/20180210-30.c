#include <stdio.h>
//https://www.codesdope.com/c-decide-and-loop/ swith case
int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf(" %c",&grade);

    switch(grade)
    {
        case 'A':
            printf("\nExcellent\n");
            break;
        case 'B':
            printf("\nOutstandin\n");
            break;
        case 'C':
            printf("\nGood\n");
            break;
        case 'D' :
            printf("\nYou can do better\n");
            break;
        case 'E':
            printf("\nYou failed\n");
            break;
        default :
            printf("\nInvalid\n");
    }
    return 0;
}
