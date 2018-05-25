#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;

	if (a == 0)
	{
		printf("a is equal to 0\n");
	}
	if (a != 0)
	{
		printf("a is not equal to 0\n");
	}
	if (a > b)
	{
                printf("a is greater than b\n");
	}
	if (a >= b)
	{
		printf("a is greater than or equal to b\n");
	}
	if (!(a > b))
	{
		printf("a is not greater than b\n");
	}
	if (a == b && a == 0)
	{
		printf("a and b are both 0\n");
	}
	if (a == b || a < b)
	{
		printf("a is less than or equal to b\n");
	} 
}
