#include <stdio.h>

int main(void) {

	int num1, num2, num3, max = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2) {
		if (num1 > num3) {
			max = num1;
		}
		if (num1 < num3) {
			max = num3;
		}
	}
	if (num1 < num2) {
		if (num2 > num3) max = num2;
		if (num2 < num3) max = num3;
	}
	printf("MAX : %d", max);
	return 0;
}  // p.186	chpater 6-1 00:10:55.49

