// 사용자에게서 총 9개의 숫자를 입력 받아, 3x3 배열을 초기화 하시오.
// 3x3 배열에서 대각선 원소들의 합을 출력하시오.
#include <stdio.h>

int main()
{
	int arr[3][3] = { 0, };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i == j)
				sum += arr[i][j];
		}
	}
	printf("%d", sum);
}
