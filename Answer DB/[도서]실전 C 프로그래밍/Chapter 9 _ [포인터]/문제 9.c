#include <stdio.h>

int* mid(int* a)
{
	int max, secondmax;
	int i = 0;

	max = secondmax = *a;

	while (i <= 3)
	{
		if (*(a + i) > max)
		{
			secondmax = max;
			max = *(a + i);
		}
		else if (*(a + i) > secondmax)
			secondmax = *(a + i);
		i++;
	}
	return &secondmax;
}

int main()
{
	int arr[3];

	int* ans;

	for (int* p = arr; p < arr + 3; p++)
		scanf("%d", p);
	
	ans = mid(arr);

	printf("%d", *ans);
	return 0;
}
