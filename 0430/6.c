#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int value = 0x44434241;
	printf("저장 값: %#x(16진수) %d(10진수)\n\n", value, value);

	int* pi = &value;
	char* pc = (char*)&value;

	printf("변수명  저장값    주소값\n");
	printf("--------------------------------\n");
	printf(" value  %#x  %llu\n\n", value, (uintptr_t)pi);

	printf("간접참조 코드 문자  주소값\n");
	printf("---------------------------------\n");

	for (int i = 0; i <= 3; i++) {
		char ch = *(pc + i);
		printf(" *(pc+%d) %#x %3c %llu\n", i, ch, ch, (uintptr_t)(pc + i));
	}
	return 0;
}
