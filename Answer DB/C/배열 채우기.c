#include <stdio.h>

void print(int arr[][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == 0)
				printf("бр");
			else
				printf("бс");
		}
		printf("\n");
	}
}

void myFunc(int arr[][9], int x, int y, int k)
{
	for (int i = x - k; i <= x + k; i++)
		for (int j = y - k; j <= y + k; j++)
			arr[i][j] = 1;

	print(arr);
	printf("\n");
}

int main()
{
	int arr[9][9] = { 0, };
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if ((i == 4 || j == 4) || (i == j) || ((i + j) == 8))
				arr[i][j] = 1;

	for (int k = 1; k <= 4; k++)
		myFunc(arr, 4, 4, k);

	return 0;
}
