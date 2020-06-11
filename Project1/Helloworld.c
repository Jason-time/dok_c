#include <stdio.h>
int main(void) {

	int nMax = 0;
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);

	nMax = a > b ? a > c ? a : c : b>c?b:c ;
	printf("MAX : %d\n", nMax);

	return 0;
}  // p.168  00:12:02.63




