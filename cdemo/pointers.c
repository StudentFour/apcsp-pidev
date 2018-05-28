#include <stdio.h>

int main() {
	int a;
	int *ptrtoa;

	ptrtoa = &a;

	a = 5;
	printf("The value of a is %d\n", a);

	*ptrtoa = 6;
	printf("The value of a is %d\n", a);

	printf("The value of ptrtoa is %d\n", ptrtoa);
	printf("It stores the value %d\n", *ptrtoa);
	printf("The address of a is %d\n", &a);
	float d = 6.9;
	float e = 4.20;
	float *ptrtod = &d;
	float *ptrtoe = &e;
	printf("The value of d is %f and the address of d is %d\n", d, ptrtod);
	printf("The value of e is %f and the address of e is %d\n", e, ptrtoe);
	float temp = d;
	float *ptrtotemp = &temp;
	d = *ptrtoe;
	e = *ptrtotemp;
	printf("The new values of d and e are %f and %f\n", d, e);
}
