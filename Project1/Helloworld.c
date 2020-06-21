#include <stdio.h>  

// 정수 입력 함수
int GetData(void) {
	int num;
	printf("정수를 입력하세요. : ");
	scanf_s("%d",&num);

	return num;
}

// 최댓값 구하기 함수
int GetMax(int num1, int num2, int num3) {
	int nMax=num1;
	if (nMax < num2) nMax = num2;
	if (nMax < num3) nMax = num3;
	return nMax;
}

//사용자에게 나이 입력 받는 인터페이스
void PrintData(int num1, int num2, int num3, int nMax) {
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", num1, num2, num3, nMax);
	return ;
}
 
int main(void) {
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;

	//입력
	for (i = 0; i < 3;++i)
		aList[i] = GetData();
	//최댓값 계산
	nMax = GetMax(aList[0], aList[1], aList[2]);
	// 출력
	PrintData(aList[0], aList[1], aList[2], nMax);

	return 0;
}  // // chpater10 10-01 p.348 codediv.c
