#include <stdio.h>

int main()
{
	int N;
	int a, b;
	scanf("%d", &N);

	a = N - (N * 22 / 100);
	b = N - ((N * 20 / 100) * 22 / 100);
	printf("%d %d", a, b);
	return 0;
}
