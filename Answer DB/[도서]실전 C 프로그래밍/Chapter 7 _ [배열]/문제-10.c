#include <stdio.h>

int main()
{
	int arr[3][3] = { 0, };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i == j)
				sum += arr[i][j];
		}
	}
	printf("%d", sum);
}
