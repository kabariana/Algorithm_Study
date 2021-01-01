#include <stdio.h>

void gcdlcm(int a, int b, int* _gcd, int* _lcm)
{
	int n = a > b ? b : a;
	*_gcd = 1;
	for (int i = 1; i <= n; i++)
		if (a % i == 0 && b % i == 0)
			*_gcd = i;

	*_lcm = (a * b) / (*_gcd);
}

int main()
{
	int a, b;
	int gcd, lcm;
	scanf("%d %d", &a, &b);

	gcdlcm(a, b, &gcd, &lcm);

	printf("%d %d", gcd, lcm);
	return 0;
}
