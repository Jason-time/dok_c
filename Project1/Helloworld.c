#include <stdio.h>

int main(void) {

	int nRoop1 = 0, nRoop2 = 0, nCnt = 5;

	while (nRoop1 < nCnt) {
		nRoop2 = 0;
		while (nRoop2 < nCnt) {
			putchar('*');
			putchar('\t');
			nRoop2++;
		}
		putchar('\n');
		nRoop1++;
	}  
	return 0;
}  // p.234	chpater7 5 by 5 nested roop    ??



