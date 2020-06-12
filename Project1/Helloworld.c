#include <stdio.h>

int main(void) {

	int nCnt = 0, nInput;

	scanf_s("%d", &nInput);
	if (nInput < 1) nInput = 1;
	else if (nInput > 9) nInput = 9;

	while (nCnt != nInput) {
		putchar('*');
		nCnt++;
	}
	putchar('\n');
	return 0;
}  // p.225	chpater7 rooping  00:12:10.58



