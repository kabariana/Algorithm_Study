#include <stdio.h>

int func1(int x)
{
	return 2 * x * x - 5 * x + 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", func1(n));
	return 0;
}
