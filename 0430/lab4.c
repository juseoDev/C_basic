#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[][3] = { {1, 2, 3}, {10, 20, 30}, {50, 60, 70} };

	int(*dp)[3] = a;
	int* p = a[1];

	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d\n", dp[1][0], dp[1][1], dp[1][2]);

	return 0;
}
