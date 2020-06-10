#include <stdio.h>
#include <float.h>
int main() {
 	int num1,nH, nM,nS;

	scanf_s("%d", &num1);
	nS = num1 % 60;
	nM =  (num1 / 60)%60;
	nH = num1 / 3600;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n",  num1,nH,nM,nS); 
	return 0;
}
 