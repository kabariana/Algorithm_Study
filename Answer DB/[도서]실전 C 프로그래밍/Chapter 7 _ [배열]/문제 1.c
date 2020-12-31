#include <stdio.h>

int main()
{
	int arr[5] = { 0, };
	int avg, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	avg = sum / 5;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > avg)
			printf("%d\n", arr[i]);
	}
	return 0;
}
