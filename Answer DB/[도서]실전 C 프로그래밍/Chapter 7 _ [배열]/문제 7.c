#include <stdio.h>

int main()
{
	int arr[10]; 
	int flag[10] = { 0, };
	int cnt = 0;

	for (int i = 0; i < 10; i++) 
		scanf("%d", &arr[i]);

	for (int i = 0; i < 10; i++) 
	{
		if (flag[i] > 0) 
			continue;
		for (int j = 0; j < 10; j++) 
		{
			if (arr[j] == arr[i]) {
				cnt++;
				flag[j] =1;
			}
		}
		printf("%d %d\n", arr[i], cnt);
		cnt = 0;
	}
	return 0;
}
