#include <stdio.h>

int main(int argc, char* argv[]) {
	//��ü ���ݷ� �迭
	double aRate[10] = {
		0.0,0.1,0.25, //1~3��
		0.5,0.5,		//4,5��
		0.6,0.65,		//6,7��
		0.8,0.82,0.97	//8~10��
	};
	int nAge = 0, i = 0, nFee = 1000;

	//���ǥ ���
	printf("\t���ǥ\n\n");
	for (i = 1;i <= 10;++i)
		printf("%2d�� ��� : \t%d��\n", i, (int)(nFee * aRate[i - 1]));;
	putchar('\n');

	//���� �Է� �� �ε��� ����
	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);
	if (nAge < 1)		nAge = 1;
	else if (nAge > 10)	nAge = 10;

	//���̿� �´� �迭 ���� �� ���
	printf("������� : %d��\n", (int)(nFee * aRate[nAge - 1]));
	putchar('\n');
	return 0;
}  // chpater09 p.315 arraylookup01.c
