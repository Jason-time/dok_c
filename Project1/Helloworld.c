#include <stdio.h>

int main(void) {

	int aList[5][5] = { 0 };

	//nFlag 변수는 반복문 내부에서 매번 참/거짓으로 변함
	int i = 0, j = 0, nCounter = 0, nFlag = 1;

	for (i = 0;i < 5;++i) {
		// 토글을 위한 플레그 변수
		if (nFlag) {
			//정방향 채우기
			for (j = 0; j < 5; j++) {
				aList[i][j] = ++nCounter;
				//다음 반복문에서 거짓으로 바꾸기 위해 수정
			}
			nFlag = 0;
		}
		else {
			for (j = 0; j < 5; j++) {
				aList[i][4 - j] = ++nCounter;
			}
			nFlag = 1;
		}
	}
	// 배열 출력
	for (i = 0;i < 5;++i) {
		for (j = 0;j < 5;++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}

	return 0;
}  // chpater09 p.312 arraycross04.c	
