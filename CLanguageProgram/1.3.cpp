//20250505 求两个数中的较大者
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b)
{
	if (a > b) return a;
	if (b > a) return b;
	return a;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("\nmax = %d\n", max(a, b));

	return 0;
}
