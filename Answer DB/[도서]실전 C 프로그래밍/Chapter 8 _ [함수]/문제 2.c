//두 개의 양의 정수 A과 B을 입력 받아, A부터 B까지의 합을 계산하는 프로그램을 작성하시오.
// - A ≤ B인 입력만 들어온다고 가정하시오. 
// - sum 함수 정의 및 사용
// -인자는 하나의 정수 n, 반환형은 int - 1부터 n까지의 합 반환, n(n + 1) / 2 공식 이용
#include <stdio.h>

int sum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", sum(b) - sum(a - 1));
	return 0;
}
