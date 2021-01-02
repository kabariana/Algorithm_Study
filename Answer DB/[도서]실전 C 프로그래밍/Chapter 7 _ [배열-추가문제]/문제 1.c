#include <stdio.h>

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf(" %d", arr[i]);
	}
	return 0;
}
