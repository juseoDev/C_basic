#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(int num);

int main(void) {
	int num;
	scanf("%d", &num);
	reverse(num);
	return 0;
}

void reverse(int num) {
	if (num <= 0) {
		return;
	}
	printf("%d", num % 10);
	reverse(num / 10);
}
