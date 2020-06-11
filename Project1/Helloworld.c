#include <stdio.h>

int main(void) {

	int nAge, nFee = 1000;
	double dResult;

	scanf_s("%d", &nAge);
	dResult = nFee;

	if (nAge <= 3) {
		dResult = nFee * 0;
	}
	else if (nAge <= 13)		dResult = nFee * 0.5;
	else if (nAge <= 19)		dResult = nFee * 0.75;
	else 	dResult = nFee * 1.0;

	printf("최종요금: %.f원", dResult);
	return 0;
}  // p.197	chpater6 branching  00:07:22.35



