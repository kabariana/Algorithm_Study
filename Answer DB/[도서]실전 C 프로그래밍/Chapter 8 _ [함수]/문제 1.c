// 양의 정수 N을 입력 받아, 1부터 N까지의 합을 출력하는 프로그램을 작성하시오.
// -add 함수 정의 및 사용 - 인자는 두 개의 정수 x와 y, 반환형은 int - x와 y의 합을 반환
// -main 함수 - N값을 입력 받고, add 함수를 반복 호출하여 N까지의 합 계산
// - main 함수에서는 더하기 연산자(+) 사용 금지.단, 증감연산자(++ or --)는 사용 가능
#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int n, i = 0;
	int sum = 0;
	scanf("%d", &n);

	while (i <= n)
	{
		sum = add(i, sum);
		i++;
	}
	printf("%d", sum);
	return 0;
}
