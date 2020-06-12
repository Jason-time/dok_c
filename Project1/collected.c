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


#include <stdio.h>
int main(void) {

	int nMax = 0;
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);

	nMax = a > b ? a > c ? a : c : b>c?b:c ;
	printf("MAX : %d\n", nMax);

	return 0;
}  // p.168  00:12:02.63

#include <stdio.h>

int main(void) {

	int nMax=-101, nInput = 0;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);
	return 0;
}  // p.171	00:06:43.85

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

#include <stdio.h>

int main(void) {

	int nAge, nFee = 1000;
	double dResult;

	scanf_s("%d", &nAge);
	dResult = nFee;

	if (nAge < 20) {
		dResult = nFee * 0.75;
	}

		printf("최종요금:%.f원", dResult);
		return 0;
}  // p.187	chpater 06-02 00:12:56.20

#include <stdio.h>

int main(void) {

	int nAge, nFee = 1000;
	double dResult;

	scanf_s("%d", &nAge);
	dResult = nFee;

	if (nAge <= 3) {
		dResult = nFee * 0;
	}
	else if (nAge <= 13)		dResult = nFee * 0.5;
	else if (nAge <= 19)		dResult = nFee * 0.75;
	else 	dResult = nFee * 1.0;

	printf("최종요금: %.f원", dResult);
	return 0;
}  // p.197	chpater6 branching  00:07:22.35

#include <stdio.h>

int main(void) {

	int nCnt = 0, nInput;

	scanf_s("%d", &nInput);
	if (nInput < 1) nInput = 1;
	else if (nInput > 9) nInput = 9;

	while (nCnt != nInput) {
		putchar('*');
		nCnt++;
	}
	putchar('\n');
	return 0;
}  // p.225	chpater7 rooping  00:12:10.58

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

 */