#include <stdio.h>

int main(void) {

	int nSum = 0, nStartNum = 1,nEndNum=10;

	while (nStartNum <= nEndNum) {
		nSum += nStartNum;
		nStartNum++;
	} 
	printf("%d",nSum);
	return 0;
}  // p.237	chpater7 07-03 add 1 to 10	00:06:21.30