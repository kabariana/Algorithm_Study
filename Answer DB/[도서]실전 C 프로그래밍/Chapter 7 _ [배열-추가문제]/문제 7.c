#include <stdio.h>

int main()
{
	int arr[10], p;

	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 9; i++)
	{
		p = 0;
		while (p < i && arr[p] != arr[i]) p++;
		if (p == i)
			printf(" %d", arr[i]);
	}
	return 0;
}
