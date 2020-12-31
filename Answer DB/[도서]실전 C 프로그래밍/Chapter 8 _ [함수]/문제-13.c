// 하나의 양의 정수 N을 입력 받아, 1부터 N까지의 정수에서 숫자 3이 총 몇번 나타나는지를 
// 출력하는 프로그램 작성하시오. 
// - N = 33 일 때, 3, 13, 23, 30, 31, 32, 33, 총 7개의 수에서 8개의 3이 나타난다. 
// (∵ 숫자 33에는 3이 두 개 있으므로)
// count_3 함수 정의 및 사용 - 인자는 하나의 정수 x, 반환형은 int - 하나의 정수 x에 숫자 3이 
// 나타나는 횟수 반환
#include <stdio.h>

int count_3(int x)
{
	int i = 0, result = 0; 
	while (i <= x)
	{
		for (int j = i; j != 0; j /= 10)
			if (j % 10 == 3) 
				result++;
		i++;
	}
	return result;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", count_3(n));
	return 0;
}
