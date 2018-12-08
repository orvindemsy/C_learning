#include <stdio.h>
//https://www.codesdope.com/c-structure/ number2
//Array of Structures
//What about if we need to create a data for 100 student?
int main()
{
    struct student
    {
        int roll_no;
        char name[25];
        int phone_no;
    };

    struct student stud[3];
    int i;
    printf("Please enter the data of student :\n");
    printf("==========================================\n");

    for (i=0;i<3;i++)
    {
        printf("Enter the student %d roll no  :\n",(i+1));
        scanf("%d",&stud[i].roll_no);
        printf("Enter the student's name      :\n");
        scanf("%s",stud[i].name);
        printf("Enter the student cell no     :\n");
        scanf("%d",&stud[i].phone_no);

    }

    printf("===========================================\n");

    for (i=0;i<3;i++)
    {
        printf("Enter the student no     : %d\n",stud[i].roll_no);
        printf("Enter the student's name : %s\n",stud[i].name);
        printf("Enter the student cell no: %d\n\n",stud[i].phone_no);
    }




}
