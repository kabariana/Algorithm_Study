// 배열에 5개의 정수를 입력 받아서 저장하시오.
// 첫 번째 원소와 두 번째 원소를 비교하여 첫 번째 원소가
// 두 번째 원소보다 크면 서로 교환하여 저장하시오.
// 이 교환 연산을 첫 번째 원소부터 마지막 바로 전 원소까지 반복하시오.
// 참고 : 제일 큰 수가 맨 뒤로 이동한다.
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
