#include <stdio.h>
 int main() {

	 int nInput;
	 char nPath_y[20] = "�հ�";
	 char nPath_n[20] = "���հ�";
	 
	printf("Ű�� �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	printf("���: %s\n", nInput >= 150 ? nPath_y : nPath_n);

  	return 0;
}  // p.168  00:22:48.43



