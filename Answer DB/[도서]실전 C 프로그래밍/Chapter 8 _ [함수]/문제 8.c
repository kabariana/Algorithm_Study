//하나의 정수 x와 2차 함수 f(x)와 g(x)의 계수를 나타내는 6개의 정수를 입력 받아, 
// 합성함수 g(f(x))를 계산하는 프로그램을 작성하시오. 
// - func2 함수 정의 및 사용 - 문제 7과 동일
// - main 함수 - 정수들을 입력 받고, func2 함수 호출 및 결과 출력
#include <stdio.h>

int func2(int x, int a, int b, int c)
{
	return a * x * x + b * x + c;
}

int main()
{
	int x, a1, b1, c1, a2, b2, c2;
	scanf("%d", &x);

	scanf("%d %d %d", &a1, &b1, &c1);
	scanf("%d %d %d", &a2, &b2, &c2);
	printf("%d", func2(func2(x, a1, b1, c1), a2, b2, c2));
	return 0;
}
