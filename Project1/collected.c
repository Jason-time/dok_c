/*

# chapter 4

#include <stdio.h>
#include <float.h>
int main() {
	printf("두 정수를 입력하세요\n");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("AVG : %.2f\n", (num1+(float)num2)/2);

	return 0;
}	00:04:53.87

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
}	00:09 : 10.58

#include <stdio.h>
#include <float.h>
int main() {

	int nInput, nTotal;

	nTotal = 0;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);

	return 0;
}  // p.129 / 00:04:56.24

#include <stdio.h>
 int main() {

	 int nInput;
	 char nPath_y[20] = "합격";
	 char nPath_n[20] = "불합격";

	printf("키를 입력하세요. : ");
	scanf_s("%d", &nInput);

	printf("결과: %s\n", nInput >= 150 ? nPath_y : nPath_n);

	return 0;
}  // p.166  00:22:48.43





 */