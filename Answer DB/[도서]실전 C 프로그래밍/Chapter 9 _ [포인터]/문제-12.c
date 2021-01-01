#include <stdio.h>

void addArray(int* a, int* b, int* c, int size)
{
	for (int* p = a, *p1 = b + size - 1, *p2 = c; p < a + size; p++, p1--, p2++)
		*p2 = (*p) + (*p1);
}

int  main()
{
	int n;
	int a[20], b[20], c[20];
	scanf("%d", &n);

	for (int* p = a; p < a + n; p++)
		scanf("%d", p);

	for (int* p = b; p < b + n; p++)
		scanf("%d", p);

	addArray(a, b, c, n);

	for (int* p = c; p < c + n; p++)
		printf(" %d", *p);

	return 0;
}

