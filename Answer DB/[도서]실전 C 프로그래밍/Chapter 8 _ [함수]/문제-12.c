// 양의 정수 N을 입력 받아, 아래 예시와 같이 높이가 N인 삼각형을 출력하는 프로그램을 작성하시오. 
// - print_line 함수 정의 및 사용 - 인자는 세 정수 x, y, z, 반환형은 void
// - 하나의 줄에 x개의 공백, y개의*, z개의 공백을 차례로 출력
// - N = 5 일 때 print_line(4, 1, 4)는 공백 4개 별표 1개 공백 4개이며 첫줄에 해당하는 그림을 그린다.
// - 자릿수에 맞게 공백문자 출력
#include <stdio.h>

void print_line(int x, int y, int z) 
{
	for (int i = 0; i < x; i++)
		printf(" ");
	for (int j = 0; j < y; j++)
		printf("*");
	for (int k = 0; k < z; k++)
		printf(" ");
	printf("\n");
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) 
		print_line((2 * (N + 1 - i) - 1) / 2, 2 * i - 1, (2 * (N + 1 - i) - 1) / 2);
	return 0;
}
