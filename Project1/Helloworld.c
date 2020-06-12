#include <stdio.h>

int main(void) {

	int  nStartNum = 1, nEndNum = 5, i, j;

	for (i = nStartNum; i <= nEndNum; i++) {
		for (j = nEndNum-i; j >= nStartNum;j--) {
			printf("\t");
		}
		for(j=nStartNum ; j<=i ; j++)			printf("\t*");
		putchar('\n');
	}

	return 0;
}  // p.241	chpater7 07-06 00:06:57.59


