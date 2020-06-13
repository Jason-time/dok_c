#include <stdio.h>

int main(void) {

	int aList[5] = { 30,40,10,50,20 };

	int i = 0, j = 0, mMinEndex = 0, nTmp = 0;

	// 
	for (i=0;i < 4;++i) { 
		mMinEndex = i;
		for (j = i+1;j < 5;++j) {
			if (aList[mMinEndex] > aList[j]) {
				mMinEndex = j;
			} 
				nTmp = aList[mMinEndex];
				aList[mMinEndex] = aList[i];
				aList[i] = nTmp;
		} 
	}
	
	//
	for (i = 0;i < 5;++i) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	return 0;
}  // chpater09 09-03 p.306 selection sort	00:19:25.78


