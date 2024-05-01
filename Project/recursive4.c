#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printBin(int a);
void printFloatBin(double a);

int main(void) {
	double num, num1;
	while (1) {
		scanf("%lf", &num);
		if (num == 0) {
			break;
		}
		printBin(num);
		printf(".");
		num1 = num - (int)(num);
		if (num1 == 0) {
			printf("0");
		}
		for (int i = 0; i < 10; i++) {
			if (num1 == 0) {
				break;
			}
			printf("%d", (int)(num1 * 2));
			num1 = num1 * 2 - (int)(num1 * 2);
		}
		printf("\n");

	}
	return 0;
}

void printBin(int a) {
	if (a == 0) {
		return;
	}
	printBin(a / 2);
	printf("%d", a % 2);
}

void printFloatBin(double a) {
	if (a == 0) {
		return;
	}
	printf("%d", (int)(a*2));
	printFloatBin((a * 2) - (int)(a * 2));
}
