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
	printf("\n");
}

int main()
{
	int arr[9][9] = { 0, };
	for (int k = 0; k <= 4; k++)
	{
		for (int i = 4 - k; i <= 4 + k; i++)
			for (int j = 4 - k; j <= 4 + k; j++)
				if ((i == 4 || j == 4) || (i == j) || ((i + j) == 8))
					arr[i][j] = 1;

		print(arr);
	}
	return 0;
}
