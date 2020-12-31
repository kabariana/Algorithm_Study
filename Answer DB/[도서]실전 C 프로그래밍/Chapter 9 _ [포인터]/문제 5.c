#include <stdio.h>

int main()
{
	int arr[5], rank[5];
	int *p, *p2;
	int temp;

	for (p = arr; p < arr + 5; p++)
		scanf("%d", p);

	for (p = arr, p2 = rank; p < arr + 5; p++, p2++)
		*p2 = *p;

	for (p = rank + 4; p > rank; p--)
	{
		for (p2 = rank; p2 < p; p2++)
		{
			if (*p2 < *(p2 + 1))
			{
				temp = *p2;
				*p2 = *(p2 + 1);
				*(p2 + 1) = temp;
			}
		}
	}

	for (p = arr; p < arr + 5; p++)
	{
		for (p2 = rank; p2 < rank + 5; p2++)
		{
			if (*p == *p2)
			{
				printf("%d=r%d ",*p, (int)(p2 - rank + 1));
				break;
			}
		}
	}
	return 0;
}
