#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int PrintMenu(void) {
	int nInput = 0;
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);
	return nInput;

}

int main(void) {
	int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0) {
		switch (nMenu)
		{
		case 1:
			puts("�� �׸��� �߰��մϴ�.");
			_getch();

			break;

		case 2:
			puts("���� �׸񿡼� �˻��մϴ�.");
			_getch();
			break;

		case 3:
			puts("��ü ������ ����մϴ�.");
			_getch();
			break;

		case 4:
			puts("���� �׸��� �����մϴ�.");
			_getch();
			break;

		default:
			puts("�� �� ���� ����Դϴ�.");
			_getch();
			break;
		}
		_getch;
	}
	puts("Bye~~!");
	return 0;
}  // chpater10 p.342 Printmenu01.c