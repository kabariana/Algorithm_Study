#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int n, i = 0;
	int sum = 0;
	scanf("%d", &n);

	while (i <= n)
	{
		sum = add(i, sum);
		i++;
	}
	printf("%d", sum);
	return 0;
}
