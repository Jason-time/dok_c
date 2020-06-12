#include <stdio.h>

int main(void) {

	int  nStartNum = 1, nEndNum = 5, i, j;

	for (i = nStartNum; i <= nEndNum; i++) {
		for (j = nStartNum; j <= i;j++) {
			printf("* ");
		}
		putchar('\n');
	}

	return 0;
}  // p.241	chpater7 07-05 00:10:50.19

