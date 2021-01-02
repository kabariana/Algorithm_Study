#include <stdio.h> 

void ABC(int* a, int k)
{
	int temp, maxIndex = 0;

	for (int i = 1; i < k; i++)
	{
		if (*(a + maxIndex) < *(a + i))
			maxIndex = i;
	}

	temp = *a;
	*a = *(a + maxIndex);
	*(a + maxIndex) = temp;
}

int main()
{
	int arr[10];

	for (int *p = arr; p < arr+10; p++)
		scanf("%d", p);

	for (int i = 0; i < 9; i++)
		ABC(arr + i, 10 - i);

	for (int *p = arr; p < arr+10; p++)
		printf("%d ", *p);

	return 0;
}
