// 하나의 정수 x와 2차 함수 f(x)의 계수를 나타내는 3개의 정수를 입력 받아 
// 예시와 같이 함수 값을 계산하는 프로그램을 작성하시오. - func2 함수 정의 및 사용
// 인자는 4개의 정수, x, a, b, c, 반환형은 int 
// ax^2 + bx + c 의 결과 값 반환
// - main 함수 - 정수들을 입력 받고, func2 함수 호출 및 결과 출력
#include <stdio.h	>

int func2(int x, int a, int b, int c)
{
	return a * x * x + b * x + c;
}

int main()
{
	int x, a, b, c;
	scanf("%d", &x);

	scanf("%d %d %d", &a, &b, &c);
	printf("%d", func2(x, a, b, c));
	return 0;
}
