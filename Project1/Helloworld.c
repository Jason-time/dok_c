#include <stdio.h>

int main(int argc, char* argv[]) {
	//전체 과금률 배열
	double aRate[10] = {
		0.0,0.1,0.25, //1~3세
		0.5,0.5,		//4,5세
		0.6,0.65,		//6,7세
		0.8,0.82,0.97	//8~10세
	};
	int nAge = 0, i = 0, nFee = 1000;

	//요금표 출력
	printf("\t요금표\n\n");
	for (i = 1;i <= 10;++i)
		printf("%2d세 요금 : \t%d원\n", i, (int)(nFee * aRate[i - 1]));;
	putchar('\n');

	//나이 입력 후 인덱스 적용
	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);
	if (nAge < 1)		nAge = 1;
	else if (nAge > 10)	nAge = 10;

	//나이에 맞는 배열 선택 후 출력
	printf("최종요금 : %d원\n", (int)(nFee * aRate[nAge - 1]));
	putchar('\n');
	return 0;
}  // chpater09 p.315 arraylookup01.c
