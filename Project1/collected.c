/*

# chapter 4

#include <stdio.h>
#include <float.h>
int main() {
	printf("�� ������ �Է��ϼ���\n");
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

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n",  num1,nH,nM,nS);
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
	 char nPath_y[20] = "�հ�";
	 char nPath_n[20] = "���հ�";

	printf("Ű�� �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	printf("���: %s\n", nInput >= 150 ? nPath_y : nPath_n);

	return 0;
}  // p.166  00:22:48.43





 */