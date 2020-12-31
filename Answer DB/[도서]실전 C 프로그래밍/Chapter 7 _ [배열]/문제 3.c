// 사용자에게서 정수 다섯 개를 입력 받는다.
// 첫 번째 큰 수와 두 번째 큰 수를 각각 출력하시오.
#include <stdio.h>

int main()
{
	int arr[5] = { 0, };
	int max, secondMax, i = 0;

	max = secondMax = -999999;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	while (i <= 4)
	{
		if (arr[i] > max)
		{
			secondMax = max;
			max = arr[i];
		}
		else if (arr[i] > secondMax)
			secondMax = arr[i];
		i++;
	}
	printf("%d\n%d", max, secondMax);
	return 0;
}
