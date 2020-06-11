#include <stdio.h>
 int main() {

	 int nInput;
	 char nPath_y[20] = "합격";
	 char nPath_n[20] = "불합격";
	 
	printf("키를 입력하세요. : ");
	scanf_s("%d", &nInput);

	printf("결과: %s\n", nInput >= 150 ? nPath_y : nPath_n);

  	return 0;
}  // p.168  00:22:48.43



