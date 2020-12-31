#include <stdio.h>

int func2(int x, int a, int b, int c)
{
	return a * x * x + b * x + c;
}

int main()
{
	int x, a1, b1, c1, a2, b2, c2;
	scanf("%d", &x);

	scanf("%d %d %d", &a1, &b1, &c1);
	scanf("%d %d %d", &a2, &b2, &c2);
	printf("%d", func2(func2(x, a1, b1, c1), a2, b2, c2));
	return 0;
}
