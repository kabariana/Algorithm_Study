// (야구 게임) 다음 프로그램을 작성하시오. 
// 1) 정답을 나타내는 0~9 사이의 서로 다른 정수 3개를 입력 받음
// 2) 정답을 추측한 0~9 사이의 서로 다른 정수 3개를 입력 받아 스트라이크 개수와 볼의 개수를
// 출력(정답을 맞출 때까지 반복) - 스트라이크 개수 : 값도 맞추고 위치도 맞춘 숫자의 개수
// - 볼 개수 : 값은 맞췄지만, 위치는 틀린 숫자의 개수
// - 전역 변수 및 함수
// - 정답은 전역변수에 저장
// - count_strike 함수 정의 및 사용 - 인자는 추측 값을 나타내는 세 개의 정수, 반환형은 int 
// - 정답과 추측을 비교하여 strike 개수를 반환
// - count_ball 함수 정의 및 사용 - 인자는 추측 값을 나타내는 세 개의 정수, 반환형은 int 
// - 정답과 추측을 비교하여 ball 개수를 반환
// - main 함수 - 각각의 추측에 대해 위 함수를 이용하여 strike와 ball의 개수를 얻고, 결과값 출력
#include <stdio.h>

// 정답 전역변수
int a, b, c;

int count_strike(int x, int y, int z)
{
	// 숫자와 위치가 다 맞는 경우
	int r = 0;
	if (x == a) r++;
	if (y == b) r++;
	if (z == c) r++;
	return r;
}

int count_ball(int x, int y, int z)
{
	// ball의 정의 : 숫자는 맞는데, 위치가 틀린 경우
	int r = 0;
	if (x == b) r++;
	if (x == c) r++;
	if (y == a) r++;
	if (y == c) r++;
	if (z == a) r++;
	if (z == b) r++;
	return r;
}

int main()
{
	int x, y, z;
	scanf("%d %d %d", &a, &b, &c);
	
	while (1)
	{
		scanf("%d %d %d", &x, &y, &z);
		printf("%dS%dB\n", count_strike(x, y, z), count_ball(x, y, z));
		if (x == a && y == b && c == z)
			break;
	}
	return 0;
}
