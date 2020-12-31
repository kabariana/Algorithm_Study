#include <stdio.h>

int main() 
{
	int x[3][2];
	int sum = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &x[i][j]);

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 2; j++) 
			sum += x[i][j];
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
