#include <stdio.h>
//https://www.codesdope.com/c-union/ number 2
//example of union
union student{
    int roll_no;
    char name[40];
    int phone_no;
    };

int main()
{
    union student s1;
    s1.roll_no = 123;
    s1.phone_no = 234;
    strcpy(s1.name,"Dems");

    printf("Name     : %s\n",s1.name);
    printf("Phone no : %d\n",s1.phone_no); //corrupted
    printf("Roll no  : %d",s1.roll_no); //corrupted

    return 0;

}
