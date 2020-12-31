// 두 양의 정수 N과 M을 입력 받아, N보다 큰 소수를 작은 것부터 차례로 M 개 출력하는 
// 프로그램을 작성하시오
// - is_prime 함수 -인자는 하나의 정수 x, 반환형은 int - 정수 x가 소수이면 1 반환, 소수가 아니면 0 반환
// - next_prime 함수 - 인자는 하나의 정수 x, 반환형은 int - 정수 x 보다 크면서 가장 작은 소수를 반환(is_prime 함수 사용) - main 함수
// - next_prime 함수를 반복 호출하여, M개의 소수를 출력
#include <stdio.h>

int is_prime(int x) {
	int cnt = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0 && x%x == 0) 
			cnt++;

	if (cnt == 2) 
		return 1;
	else 
		return 0;
}

int next_prime(int x) 
{
	int i = x + 1, j = 0;
	while (j < 5) 
	{
		if (is_prime(i) == 1) 
		{
			j++;
			return i;
		}
		i++;
	}
}

int main() 
{
	int n, m, tmp;
	scanf("%d %d", &n, &m);
	tmp = n;
	for (int i = 0; i < m; i++) 
	{
		printf(" %d", next_prime(tmp));
		tmp = next_prime(tmp);
	}

	return 0;
}
