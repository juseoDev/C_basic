#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[] = { 10, 20, 30 };
	printf("%p %p\n", score, (score + 1));
	printf("%d %d\n\n", *score, *(score + 1));

	int a[3] = { 5, 10, 15 };
	int* p = a;

	printf("%d %d %d\n", *(p), *(p + 1), *(p + 2));
	printf("%d %d %d\n", p[0], p[1], p[2]);
	printf("%d ", *p++);
	printf("%d\n\n", *p);

	p = &a[2];
	printf("%d ", *p--);
	printf("%d\n", (*p)--);
	printf("%d %d %d\n", *(p - 1), *p, *(p + 1));
	printf("%d %d %d\n", p[-1], p[0], p[1]);

	return 0;
}
