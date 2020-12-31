// 2~9 사이의 정수 N을 입력 받아, 예시와 같이 숫자 N으로 사각형을 출력하는
// 프로그램을 작성하시오.
// print_row1 함수 정의 및 사용 - 인자 2~9사이의 정수 x, 반환형 void
// - 하나의 줄에 x를 x번 출력
// print_row2 함수 정의 및 사용 -인자 2~9사이의 정수 x, 반환형은 void
// - 하나의 줄에 x를 2번 출력, 중간에 공백 적절히 삽입
#include <stdio.h>

void print_row1(int x)
{
	for (int i = 0; i < x; i++)
		printf("%d", x);
}

void print_row2(int x)
{
	for (int i = 0; i < x; i++)
	{
		if (i == 0 || i == (x - 1))
			printf("%d", x);
		else
			printf(" ");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == (n - 1))
			print_row1(n);
		else
			print_row2(n);
		printf("\n");
	}
	return 0;
}
