#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkTwins(int a);

int main(void) {
	int num;
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		printf("%s\n", checkTwins(num) ? "yes" : "no");

	}
	return 0;
}

int checkTwins(int a) {
	if (a < 10) {
		return 1;
	}
	if (a % 10 == (a % 100 / 10)) {
		checkTwins(a / 100);
	}
	else {
		return 0;
	}
}
