// 배열에 10개의 숫자를 입력 받아서 저장하시오.
// 숫자는 1 혹은 2 혹은 3 중의 하나이다.
// 각 숫자의 개수만큼 별표를 출력하시오.
#include <stdio.h>

int main()
{
	int arr[3] = { 0, };
	int temp;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &temp);
		arr[temp-1]++;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d : ", i+1);
		for (int j = 0; j < arr[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
