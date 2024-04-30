#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 100;
	char c = 'A';

	int* pi = &i;
	char* pc = &c;
	printf("간접참조 출력: %d %c\n", *pi, *pc);

	*pi = 200;
	*pc = 'B';
	printf("직접참조 출력: %d %c\n", i, c);

	return 0;
}
