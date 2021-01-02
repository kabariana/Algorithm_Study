#include <stdio.h>

void addArray(int* a, int* b, int* c, int size)
{
	for (int i = 0; i < size; i++)
		*(c + i) = *(a + i) + *(b + size - 1 - i);
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

