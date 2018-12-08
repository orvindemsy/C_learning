#include <stdio.h>
#include <string.h>
//https://www.codesdope.com/c-structure/ number5
//Structure to Function
//We can also pass structure to a function, two methods are passing by value and passing by reference
//Passing by Reference
struct student
    {
        int roll_no;
        char name[25];
    };

void display (struct student *p)
    {
        printf("Student roll no : %d\n",p->roll_no);
        printf("Student name    : %s\n",p->name);
    }

int main()
{
    struct student s={5,"Oh"};
    //s.roll_no = 3;
    //strcpy(s.name,"Lala");
    printf("This is in the name in the main function : %s\n\n",s.name);
    display(&s);
    return 0;
}
