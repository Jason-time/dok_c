#include <stdio.h>  

// ���� �Է� �Լ�
int GetData(void) {
	int num;
	printf("������ �Է��ϼ���. : ");
	scanf_s("%d",&num);

	return num;
}

// �ִ� ���ϱ� �Լ�
int GetMax(int num1, int num2, int num3) {
	int nMax=num1;
	if (nMax < num2) nMax = num2;
	if (nMax < num3) nMax = num3;
	return nMax;
}

//����ڿ��� ���� �Է� �޴� �������̽�
void PrintData(int num1, int num2, int num3, int nMax) {
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.", num1, num2, num3, nMax);
	return ;
}
 
int main(void) {
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;

	//�Է�
	for (i = 0; i < 3;++i)
		aList[i] = GetData();
	//�ִ� ���
	nMax = GetMax(aList[0], aList[1], aList[2]);
	// ���
	PrintData(aList[0], aList[1], aList[2], nMax);

	return 0;
}  // // chpater10 10-01 p.348 codediv.c
