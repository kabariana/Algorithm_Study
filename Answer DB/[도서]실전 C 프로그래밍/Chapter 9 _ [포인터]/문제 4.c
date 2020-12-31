#include <stdio.h>

int main()
{
	int x[3];
	int *p, *p2;
	int temp;

	for (p = x; p < x + 3; p++)
		scanf("%d", p);

	for (p = x + 2; p > x; p--)
	{
		for (p2 = x; p2 < p; p2++)
		{
			if (*p2 > *(p2 + 1))
			{
				temp = *p2;
				*p2 = *(p2 + 1);
				*(p2 + 1) = temp;
			}
		}
	}

	printf("%d", *(p + 1));
	return 0;
}
