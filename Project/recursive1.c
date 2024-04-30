#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GCD(int a, int b);

int main(void) {
	int num1, num2;
	int max, min;
	int result;
	while (1) {
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0) {
			break;
		}
		max = num1 > num2 ? num1 : num2;
		min = num1 <= num2 ? num1 : num2;
		result = GCD(max, min);
		printf("%d\n", result);
	}
	
	return 0;
}

int GCD(int a, int b) {
	int div;
	div = a % b;
	if (div == 0) {
		return b;
	}
	GCD(b, div);
}
