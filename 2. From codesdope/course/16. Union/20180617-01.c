#include <stdio.h>
//https://www.codesdope.com/c-union/ number 1
//the amount of memory required to store a structure is the sum of the memory sizes of all its members
//the memory size of a union is equal to the size of its member occupying the maximum space in the memory
struct student1
{
    int roll_no;
    char name[40];
    int phone_number;
};

union student2
{
    int roll_no;
    char name[40];
    int phone_number;
};

int main()
{
    struct student1 s1;
    union student1 u1;

    printf("Size of struct : %d\n",sizeof(s1));
    printf("Size of union : %d\n",sizeof(u1));

    return 0;
}
