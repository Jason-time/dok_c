#include <stdio.h>

int main(void) {

	int aList[5][5] = { 0 };

	//nFlag ������ �ݺ��� ���ο��� �Ź� ��/�������� ����
	int i = 0, j = 0, nCounter = 0, nFlag = 1;

	for (i = 0;i < 5;++i) {
		// ����� ���� �÷��� ����
		if (nFlag) {
			//������ ä���
			for (j = 0; j < 5; j++) {
				aList[i][j] = ++nCounter;
				//���� �ݺ������� �������� �ٲٱ� ���� ����
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
	// �迭 ���
	for (i = 0;i < 5;++i) {
		for (j = 0;j < 5;++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}

	return 0;
}  // chpater09 p.312 arraycross04.c	
