// 3~18 사이의 정수 N을 입력 받아, 3개 주사위의 총 합이 N이 되는 모든 경우를
// 출력하는 프로그램을 작성하시오.
// - 전역변수 N 사용 : 입력 받은 정수 저장
// - die1 함수 정의 및 사용 - 인자는 하나의 정수 x, 반환형은 void
// - 첫 번째 주사위 수가 x인 모든 경우 고려
// - 내부에서 die2 함수 호출
// - die2 함수 정의 및 사용 - 인자는 정수 x와 y, 반환형은 void
// - 첫 번째 주사위 수가 x, 두 번째 주사의의 수가 y인 모든 경우 고려
// - 내부에서 die3 함수 호출
// - die3 함수 정의 및 사용 - 인자는 정수 x,y,z 반환형은 void
// - 첫 번째, 두 번째, 세 번째 주사위 수가 x,y,z인 경우 고려, 즉 주사위 합이 N이 되면,
// - x,y,z 값 출력
// - main 함수 - 정수를 입력 받고, die1 함수를 6번 반복 호출
#include <stdio.h>

int n;

void die1(int);
void die2(int, int);
void die3(int, int, int);

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= 6; i++)
		die1(i);

	return 0;
}

void die1(int x)
{
		die2(n, x);
}

void die2(int x, int y)
{
	for (int i = 1; i <= 6; i++)
		die3(x, y, i);
}
void die3(int x, int y, int z)
{
	for (int i = 1; i <= 6; i++)
		if(n == y+z+i)
			printf("%d %d %d\n", y, z, i);
}
