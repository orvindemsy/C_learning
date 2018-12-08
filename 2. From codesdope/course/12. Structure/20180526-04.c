#include <stdio.h>
//https://www.codesdope.com/c-structure/ number4
//Pointer to structures
int main()
{
    struct student
    {
        char name[25];
        int roll_no;
    };

    struct student stud={"Demsy",2};
    struct student *ptr;
    ptr = &stud;

    printf("%s %d\n",stud.name, stud.roll_no);
    printf("%s %d\n",ptr->name, ptr->roll_no);

    return 0;
}
