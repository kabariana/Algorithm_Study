// 하나의 정수 x를 입력 받아 다음 함수의 결과를 출력하는 프로그램을 작성하시오.
// f(x) =  2x^2 -5x + 1
// -func1 함수 정의 및 사용 - 인자는 하나의 정수 x, 반환형은 int - f(x)의 결과값 반환
// - main 함수 - 정수를 입력 받고, func1 함수 호출 및 결과 출력
#include <stdio.h>

int func1(int x)
{
	return 2 * x * x - 5 * x + 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", func1(n));
	return 0;
}
