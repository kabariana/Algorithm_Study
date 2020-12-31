// 배열에 5개의 정수를 입력 받아서 저장하시오.
// - 문제 8의 작업을 N-1번 반복하여, 가장 작은 수부터
// 가장 큰 수까지 오름차순으로 정렬하시오. 여기서 N=5이다.
// 버블정렬 구현...
#include <stdio.h>

int main()
{
	int arr[5];
	int temp;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
	return 0;
}
