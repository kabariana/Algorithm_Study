// 학생 3명의 국어, 영어 성적이 있다.
// 이 자료를 저장하기 위한 2차원 배열을 선언 하시오.
// 학생 별 국어와 영어 성적을 사용자로부터 입력 받으시오.
// 학생 별 국어와 영어 성적의 합을 각각 출력하시오.
#include <stdio.h>

int main() 
{
	int x[3][2];
	int sum = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &x[i][j]);

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 2; j++) 
			sum += x[i][j];
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
