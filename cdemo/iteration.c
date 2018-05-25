#include <stdio.h>

int main()
{
	int div = 5;
	// standard for loop - from 0
	for (int i = 0; i < 100; i++)
	{
		if (i%div == 0)
			printf("i is equal to %d\n", i);
	}

}
