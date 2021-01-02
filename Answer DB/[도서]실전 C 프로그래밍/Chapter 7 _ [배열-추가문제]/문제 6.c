#include <stdio.h>

int main()
{
	int arr[10];
	int cnt;

	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 10; i++)
	{
		cnt = 0;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] < arr[j])
				cnt++;
		}
		printf(" %d", cnt);
	}
	return 0;
}
