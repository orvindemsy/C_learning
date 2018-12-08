#include <stdio.h>
//https://www.codesdope.com/c-structure/ number3
//copy structure
//I am just too lazy to write the code again so I just copy paste what's written on the website.
#include <string.h>
int main()
{
  struct student
  {
    int roll_no;
    char name[30];
    int phone_number;
  };
  struct student p1 = {1,"Brown",123443};
  struct student p2;
  p2 = p1;
  printf("roll_no : %d\n", p2.roll_no);
  printf("name : %s\n", p2.name);
  printf("phone_number : %d\n", p2.phone_number);
  return 0;
}
