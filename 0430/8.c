#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[] = { 10, 20 };
	int* p = &a[0];
	printf("%p %d %p %d\n\n", p, *p, p + 1, *(p + 1));

	printf("%d\n", *p++);
	printf("%p %d\n", p, *p);

	p = &a[0];
	printf("%d\n", *++p);
	printf("%p %d\n\n", p, *p);

	p = &a[0];
	printf("%d\n", (*p)++);
	printf("%p %d\n", p, *p);

	a[0] = 10;
	p = &a[0];
	printf("%d\n", ++ * p);
	printf("%p %d\n\n", p, *p);

	return 0;
}
