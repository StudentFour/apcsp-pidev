#include <stdio.h>

int main()
{
	int a = 10;
	float j = 1.23;
	char k = 'b';
	double p = 1.22;
	unsigned char r = 11;
	unsigned int s = 394333;

	printf("Var a has a size of %d bytes\nVar j has a size of %d bytes\nVar k has a size of %d bytes\nVar p has a size of %d bytes\n", sizeof(a), sizeof(j), sizeof(k), sizeof(p));
	printf("An unsigned character value is a single number, positive integer. An unsigned integer can be an integer between 0 and %d\n", s);
}

