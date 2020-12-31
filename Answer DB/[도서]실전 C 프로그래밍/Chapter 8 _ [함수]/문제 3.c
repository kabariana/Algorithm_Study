// 하나의 양의 정수 N을 입력 받아 다음 수식의 결과를 출력하는 프로그램을 작성하시오. 
// 1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + … + (1 + 2 + … + N)
// -sum 함수 정의 및 사용 - 문제 2와 동일
#include <stdio.h>

int sum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int n, result = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		result += sum(i);
	printf("%d", result);
	return 0;
}
