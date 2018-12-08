#include <stdio.h>
//https://www.codesdope.com/c-union/ number 3
//example of union
union student{
    int roll_no;
    char name[40];
    int phone_no;
    };

int main()
{
    union student s1;

    s1.phone_no = 234;
    printf("Phone no : %d\n",s1.phone_no);

    s1.roll_no = 123;
    printf("Roll no  : %d\n",s1.roll_no);

    strcpy(s1.name,"Dems");
    printf("Name     : %s\n",s1.name);
    return 0;

}
