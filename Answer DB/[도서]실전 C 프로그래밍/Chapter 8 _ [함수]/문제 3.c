#include <stdio.h>

int sum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int n, result = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		result += sum(i);
	printf("%d", result);
	return 0;
}
