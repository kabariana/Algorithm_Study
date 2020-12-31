#include <stdio.h>

int main() 
{
	int arr[10];
	int tmp;
	for (int i = 0; i < 5; i++) 
		scanf("%d", &arr[i]);
	
	for (int j = 0; j < 4; j++) 
	{
		if (arr[j] > arr[j + 1]) {
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
	return 0;
}
