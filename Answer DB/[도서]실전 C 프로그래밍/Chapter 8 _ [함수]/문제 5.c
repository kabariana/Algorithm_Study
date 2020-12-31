// 양의 정수를 반복해서 입력 받아(종료 조건 시까지), 예시와 같이 트리 모양을
// 출력하는 프로그램을 작성하시오.
// - 종료조건: 0 또는 음수 입력
// - print_triangle 함수 - 인자는 하나의 정수 x, 반환형은 void
// - 높이가 x인 삼각형 출력
#include <stdio.h>

void print_triangle(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}

int main()
{
	int n;
	while(1)
	{
		scanf("%d", &n);
		if (n == 0 || n < 0)
			break;
		else
			print_triangle(n);
	}
	return 0;
}
