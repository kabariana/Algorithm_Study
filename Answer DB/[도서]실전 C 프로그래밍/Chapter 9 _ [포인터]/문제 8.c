#include <stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{ 
	int arr[50];
	int N, a, b;
	int* p;
	
	scanf("%d", &N);
	for (p = arr; p < arr + N; p++)
		scanf("%d", p);

	scanf("%d %d", &a, &b);

	swap(arr + a, arr + b);

	for (p = arr; p < arr + N; p++)
		printf(" %d", *p);
	return 0;
}
