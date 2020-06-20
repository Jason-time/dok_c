/*

# chapter 4

#include <stdio.h>
#include <float.h>
int main() {
	printf("두 정수를 입력하세요\n");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("AVG : %.2f\n", (num1 + (float)num2) / 2);

	return 0;
}	00:04 : 53.87

#include <stdio.h>
#include <float.h>
int main() {
	int num1, nH, nM, nS;

	scanf_s("%d", &num1);
	nS = num1 % 60;
	nM = (num1 / 60) % 60;
	nH = num1 / 3600;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", num1, nH, nM, nS);
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

	nMax = a > b ? a > c ? a : c : b > c ? b : c;
	printf("MAX : %d\n", nMax);

	return 0;
}  // p.168  00:12:02.63

#include <stdio.h>

int main(void) {

	int nMax = -101, nInput = 0;

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

#include <stdio.h>

int main(void) {

	int nSum = 0, nStartNum = 1, nEndNum = 10;

	while (nStartNum <= nEndNum) {
		nSum += nStartNum;
		nStartNum++;
	}
	printf("%d", nSum);
	return 0;
}  // p.237	chpater7 07-03 add 1 to 10	00:06:21.30

#include <stdio.h>

int main(void) {

	int  nInput, nStartNum = 1, nEndNum = 9;

	scanf_s("%d", &nInput);
	if (2 > nInput || 9 < nInput) {
		puts("ERROR");
		return 0;
	}
	else {
		while (nStartNum <= nEndNum) {
			printf("%d * %d = %d\n", nInput, nStartNum, nInput * nStartNum);
			nStartNum++;
		}
	}
	return 0;
}  // p.237	chpater7 07-04 print ? * ? = ?*?	00:09:02.43

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

#include <stdio.h>

int main(void) {

	int  nStartNum = 1, nEndNum = 5, i, j;

	for (i = nStartNum; i <= nEndNum; i++) {
		for (j = nEndNum - i; j >= nStartNum;j--) {
			printf("\t");
		}
		for (j = nStartNum; j <= i; j++)			printf("\t*");
		putchar('\n');
	}
	Or you can write like this
		-------------------------- -
		int i = 0, j = 0;
	for (i = 0; i < 5; ++i) {
		for (j = 0;j < 5;++j) {
			if (i + j >= 4) printf("*\t");
			else		putchar('\t');
		}
		putchar('\n');
	}

		return 0;
	}  // p.241	chpater7 07-06 00:06:57.59

#include <stdio.h>

	int main(void) {

		int  nStartNum = 1, nEndNum = 5, i, j, k;

		for (i = nStartNum; i <= nEndNum; i++) {
			for (j = nEndNum - i; j >= nStartNum;j--) {
				printf("\t");
			}
			for (j = nStartNum; j <= i; j++)	printf("\t*");
			for (k = nStartNum; k < i; k++) printf("\t*");
			putchar('\n');
		}
		another good code
		---------------------------
		int i =0, j=0;
		for(i=0;i<5; ++i){
		for(j=0; j<5+i; ++j){
			if(i+j>=4) printf("*\t");
			else putchar('\t');
		}
		putchar('\n');
		}
		---------------------------
		return 0;
	}  // chpater7 p.241 07-07 Print out pyramid	00:05:33.97

	#include <stdio.h>

int main(void) {
	int aList[5] = { 30,40,10,50,20 };
	int i = 0;

	for (i =1;i < 5;i++)
		if (aList[0] < aList[i] )
		{
			aList[0] = aList[i];
		}

	for (i = 0;i < 5;i++)
		printf("%d\t", aList[i]);

	putchar('\n');

	printf("MAX: %d\n", aList[0]);

	return 0;
}  // chpater 8 p.272 08-01 Find out value of Max	00:08:04.88

#include <stdio.h>

int main(void) {
	int aList[5] = { 30,40,10,50,20 };
	int i = 0,nTmp=0;


	for (i =1;i < 5;i++)
		if (aList[0] > aList[i] )
		{
			nTmp = aList[i];
			aList[i] = aList[0];
			aList[0] = nTmp;
		}

	for (i = 0;i < 5;i++)
		printf("%d\t", aList[i]);

	putchar('\n');

	printf("MIN: %d\n", aList[0]);

	return 0;
}  // chpater 8 p.273 08-02 Find out value of Min	00:06:51.11


#include <stdio.h>

int main(void) {
	int aList[3][4] = {
		{10,20,30},
		{40,50,60}
	};
	int i = 0, j = 0;
	//
	for (i = 0;i < 2;++i) {
		for (j = 0;j < 3;++j) {
			aList[i][3] += aList[i][j];
			aList[2][j] += aList[i][j];
		}
		if (3 == j) aList[2][j] += aList[i][3];
	}


	for (i = 0;i < 3;++i) {
		for (j = 0;j < 4;++j) {
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}

	return 0;
}  // chpater08 08-03 p.282  Calculate the total.	00:31:31.87

#include <stdio.h>

int main(void) {

	int aList[5] = { 30,40,10,50,20 };

	int i = 0, j = 0, nTmp = 0;
	//
	for (i = 0;i < 4;++i) {
		for (j = i + 1;j < 5;++j) {
			if (aList[i] > aList[j]) {
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}
	for (i = 0;i < 5;++i) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	return 0;
}  // chpater09 09-01 p.301  Bubble sort	00:12:35.18

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
#include <stdio.h>

int main(void) {

	int aList[5][5] = { 0 };

	int i = 0, j = 0, nCounter = 0;

	//
	for (i = 0;i < 5;++i) {
		if (i % 2 == 0)
			for (j = 0; j < 5;++j)
				aList[i][j] = ++nCounter;
		else
			for (j = 0; j < 5;++j)
				aList[i][4 - j] = ++nCounter;
	}

	//
	for (i = 0;i < 5;++i) {
		for (j = 0;j < 5;++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}

	return 0;
}  // chpater09 p.308 zigzag

#include <stdio.h>

int main(void) {

	int aList[5][5] = { 0 };

	int i = 0, j = 0, nCounter = 0, nOffset = 1;

	//
	for (i = 0;i < 5;++i) {
		// 홀수 행과 짝수 행을 구별하고 첫 번째 요소의 초깃값을 결정
		if (i % 2 == 0) nCounter = i * 5;
		else			nCounter = (i + 1) * 5 + 1;

		for (j = 0; j < 5; j++) {
			//nOffset이 양수면 nCounter 증가, 음수면 감소
			nCounter += nOffset;
			aList[i][j] = nCounter;
		}
		// 토글 스위치처럼 행마다 양수/음수 변경
		// 여기서 '-'는 부호 변경 연산자이다ㅏ.
		nOffset = -nOffset;
	}

	//
	for (i = 0;i < 5;++i) {
		for (j = 0;j < 5;++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}

	return 0;
}  // chpater09 p.310 arraycross03.c




*/