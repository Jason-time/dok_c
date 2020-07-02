#include<stdio.h>
#include<string.h>

int main(void) {
 
	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;
	int nLength = 0;
	while(*pszData) {
		pszData++;
	}

	printf("Length : %d\n", pszData- szBuffer); 

	return 0;

} // chpater11 p.382 ptrstring02.c