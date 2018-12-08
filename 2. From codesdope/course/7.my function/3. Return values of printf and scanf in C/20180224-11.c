#include <stdio.h>
//https://www.codesdope.com/blog/article/return-values-of-printf-and-scanf-in-c/ e.g.2
// What scanf returns
/*
*/
int main ()
{
	int a,b;
	printf("%d\n",scanf("%d", &a));
	printf("%d\n",scanf("%d %d", &a,&b));
	return 0;
}
