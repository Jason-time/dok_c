#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

// 나이 매개변수로 요금 반환 
int GetFee(int nAge) {
	int nFee = 1000;
	if (nAge < 20) nFee /= 2;

	return nFee;
}

// 메뉴 출력 선택받는 인터페이스
int PrintMenu(void) {
	int nInput = 0;
	system("cls");

	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);
	return nInput;
}

//사용자에게 나이 입력 받는 인터페이스
int GetAge(void) {
	int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);
	return nAge;
}
 
int main(void) {
	int nMenu = 0, nAge =0	;


	while ((nMenu = PrintMenu()) != 0){
	 
		if(nMenu ==1){
			nAge = GetAge();
			printf("요금은 %d원 입니다.\n", GetFee(nAge));
		_getch();
		}
	}

	puts("Bye~~!");
	return 0;
}  // chpater10 p.344 Looping of Print menu02.c
