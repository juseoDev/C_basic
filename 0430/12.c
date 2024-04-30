#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int ary[][4] = { {10, 20, 30, 40}, {50, 60, 70, 80} };
	int(*ptr)[4] = ary;

	printf("%zd %zd\n", sizeof(ary), sizeof(ptr));
	printf("%zd %zd\n\n", sizeof(ary[0]), sizeof(ptr[0]));

	printf("%2d %2d\n", **ary, **ptr);
	printf("%2d %2d\n", **(ary + 1), *ary[1]);
	printf("%2d %2d\n", **(ptr + 1), *ptr[1]);
	printf("%2d %2d\n", *(ary[1] + 1), *(ptr[1] + 1));
	printf("%2d %2d\n\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3));

	printf("%2d ", **ptr++);
	printf("%2d\n", **ptr);

	return 0;
}
