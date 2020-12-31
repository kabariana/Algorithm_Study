#include <stdio.h>

int sum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", sum(b) - sum(a - 1));
	return 0;
}
