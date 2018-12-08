#include <stdio.h>
//https://www.codesdope.com/practice/c-i-am-data/ number8
int main()
{
    int total, b, g;
	total = (80*45)/100;  //total students getting grade A
	b = 15;               //number of boys getting grade A
	g = total - b;        //number of girls getting grade A
	printf("number of girls getting grade A = %d\n", g);
	/*note that we did not write 'total = (80/100)*45'*/
}
