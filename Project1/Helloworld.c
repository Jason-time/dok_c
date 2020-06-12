#include <stdio.h>

int main(void) {

	int  nStartNum = 1, nEndNum = 5, i, j, k;

	for (i = nStartNum; i <= nEndNum; i++) {
		for (j = nEndNum - i; j >= nStartNum;j--) {
			printf("\t");
		}
		for (j = nStartNum; j <= i; j++)	printf("\t*");
		for (k = nStartNum; k < i; k++) printf("\t*");
		putchar('\n');
	}

	return 0;
}  // chpater7 p.241 07-07 Print out pyramid	00:05:33.97



