#include <stdio.h>

int main()
{
	
	int a;
	int* ptrtoa;

	ptrtoa = &a;

	
	a = 5;
	printf("The value of a is %d\n", a);

	*ptrtoa = 6;
	printf("The value of a is %d\n", a);

	printf("The value of ptrtoa
