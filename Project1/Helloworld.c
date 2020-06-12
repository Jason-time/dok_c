#include <stdio.h>

int main(void) {

	int  nInput, nStartNum = 1, nEndNum = 9;

	scanf_s("%d", &nInput);
	if (2 > nInput || 9 < nInput) {
		puts("ERROR");
		return 0;
	}
	else {
		while (nStartNum <= nEndNum) {
			printf("%d * %d = %d\n", nInput, nStartNum, nInput * nStartNum);
			nStartNum++;
		}
	}
	return 0;
}  // p.237	chpater7 07-04 print ? * ? = ?*?	00:09:02.43