#include <stdio.h>

int main(void) {

	int aList[5] = { 30,40,10,50,20 };

	int i = 0, j = 0, nTmp = 0;
	// 
	for (i=5-1;i > 0;--i) { 

		for (j = 0;j < i;++j) {
			if (aList[j] > aList[j+1]) {
				nTmp = aList[j];
				aList[j] = aList[j+1];
				aList[j+1] = nTmp;
			} 
		} 
	}
	
	//
	for (i = 0;i < 5;++i) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	return 0;
}  // chpater09 09-02 p.303  Bubble sort2	00:42:32.89

