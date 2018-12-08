#include <stdio.h>
#include <string.h>
//https://www.codesdope.com/c-typedef/ example 3
//using typedef to union
typedef union student{
    int roll_no;
    int phone;
    char name[40]
    }st;

int main()
{
    st s1,s2,s3;
    s1.roll_no = 1;
    s1.phone = 123;
    strcpy(s1.name,"Oi");
    s2.roll_no = 2;
    s2.phone = 234;
    strcpy(s2.name,"Hey");
    s3.roll_no = 3;
    s3.phone = 345;
    strcpy(s3.name,"Watsup");

    printf("Student roll no : %d\n",s1.roll_no);
    printf("Phone number : %d\n", s1.phone);
    printf("Student Name : %s\n\n",s1.name);

    printf("Student roll no : %d\n",s2.roll_no);
    printf("Phone number : %d\n",s2.phone);
    printf("Student Name : %s\n\n",s2.name);

    printf("Student roll no : %d\n",s3.roll_no);
    printf("Phone number : %d\n",s3.phone);
    printf("Student Name : %s\n",s3.name);
}
