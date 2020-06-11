#include <stdio.h>

int main(void) {

	int nAge, nFee = 1000;
	double dResult;

	scanf_s("%d", &nAge); 
	dResult = nFee;

	if (nAge < 20) { 
		dResult = nFee * 0.75;
	}

		printf("최종요금:%.f원", dResult);
		return 0;
}  // p.187	chpater 06-02 00:10:55.49

