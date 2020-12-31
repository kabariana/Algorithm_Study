#include <stdio.h>

int main()
{
	int arr[50];
	int* p;
	int n, cnt = 0;

	scanf("%d", &n);

	for (p = arr; p < arr + n; p++)
	{
		scanf("%d", p);
		
		if (*p != 0)
			cnt++;
		else
			break;
	}
	printf("%d", cnt);

	return 0;
}
