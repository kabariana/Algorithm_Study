#include <stdio.h>

int main() {

	int x[3][3];
	int y[2][2];
	int tmp = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &x[i][j]);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &y[i][j]);

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
			printf(" %d", x[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++) 
			printf(" %d", y[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			if (x[i][j] == y[i - 1][j] && x[i][j + 1] == y[i - 1][j + 1]) 
			{
				if (x[i + 1][j] == y[i][j] && x[i + 1][j + 1] == y[i][j + 1])
					printf("%d %d", i, j);
				tmp = 1;
				break;
			}
		}
		if (tmp == 1)
			break;
	}
	if (tmp == 0) 
		printf("none");

	return 0;
}
