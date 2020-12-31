#include <stdio.h>

int main()
{
	int arr[3] = { 0, };
	int temp;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &temp);
		arr[temp-1]++;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d : ", i+1);
		for (int j = 0; j < arr[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
