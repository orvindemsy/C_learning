#include <stdio.h>
#include <string.h>
//https://www.codesdope.com/c-structure/ number 1
//using struct
int main()
{
    struct student
    {
        int roll_no;
        char name[25];
        int phone_no;
    };

    struct student p1 = {30,"Bobby",123456};
    struct student p2,p3;
    p2.roll_no = 20;
    strcpy (p2.name,"Danny");
    p2.phone_no = 12345678;

    p3.roll_no = 10;
    strcpy (p3.name,"Sammy");
    p3.phone_no = 1234567;

    printf("Here are the student's information\n");
    printf("=========================================\n");
    printf("Student roll number : %d\n",p1.roll_no);
    printf("Student_name : %s\n",p1.name);
    printf("Student phone no : %d\n\n",p1.phone_no);

    printf("Student roll number : %d\n",p2.roll_no);
    printf("Student_name : %s\n",p2.name);
    printf("Student phone no : %d\n\n",p2.phone_no);

    printf("Student roll number : %d\n",p3.roll_no);
    printf("Student_name : %s\n",p3.name);
    printf("Student phone no : %d\n\n",p3.phone_no);

    return 0;
}
