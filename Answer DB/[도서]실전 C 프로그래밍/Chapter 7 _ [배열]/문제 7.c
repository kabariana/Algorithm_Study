// 10개의 정수를 입력받는다. 
// 각 정수가 몇 번 등장했는지를 입력받은 순서대로 출력하시오.
// 입력 받은 숫자와 총 입력 횟수를 함께 출력하시오. 동일한
// 숫자에 대해서는 한 번만 출력하시오.

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
