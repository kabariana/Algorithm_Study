#include <stdio.h>

int arrsum(int* a, int* b)
{
	int sum = 0;
	for (a; a <= b; a++)
		sum += *a;
	return sum;
}

int main()
{
	int arr[100];
	int n, s, e;
	int* p, * ps, * pe;

	scanf("%d %d %d", &n, &s, &e);

	for (p = arr; p < arr + n; p++)
		scanf("%d", p);

	ps = arr + s;
	pe = arr + e;

	printf("%d", arrsum(ps, pe));
	return 0;
}
