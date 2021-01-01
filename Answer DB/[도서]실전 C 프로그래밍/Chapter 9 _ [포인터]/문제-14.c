#include <stdio.h>

int add_to_k(int* a, int* b)
{
	int sum = 0;
	for (a; a <= b; a++)
		sum += *a;
	return sum;
}

int main()
{
	int n, ans = 0;
	int arr[100];
	scanf("%d", &n);

	for (int* p = arr; p < arr + n; p++)
		scanf("%d", p);

	for (int* p = arr; p < arr + n; p++)
		ans += add_to_k(arr, p);

	printf("%d", ans);

	return 0;
}
