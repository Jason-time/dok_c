#include<stdio.h>
#include<string.h>

int main(void) {
	int* pList = NULL, i = 0;

	pList = (int*)malloc(sizeof(int) * 3);
	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (i = 0;i < 3;++i) {
		printf("%d\n", pList[i]);
	}
	free(pList);
	return 0;

} // chpater11.2 p.385 ptrmalloc.c