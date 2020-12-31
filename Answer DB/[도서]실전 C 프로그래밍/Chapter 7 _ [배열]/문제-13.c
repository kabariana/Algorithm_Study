// 2차원 배열 x에 3x3 정수로 된 행렬을 입력하시오.
// 2차원 배열 y에 2x2 정수로 된 행렬을 입력하시오.
// x 행렬에서 y 행렬이 어디에 있는지, x에서 y행렬 시작위치의 행 번호와
// 열 번호를 출력하시오. (여러 개 있는 경우 첫 번째 나타나는 y행렬의 행과
// 열 번호를 쓰시오)
// 없는 경우에는 "none"을 출력하시오.
#include <stdio.h>

int main() {

	int x[3][3];
	int y[2][2];
	int tmp = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &x[i][j]);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &y[i][j]);

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
			printf(" %d", x[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++) 
			printf(" %d", y[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			if (x[i][j] == y[i - 1][j] && x[i][j + 1] == y[i - 1][j + 1]) 
			{
				if (x[i + 1][j] == y[i][j] && x[i + 1][j + 1] == y[i][j + 1])
					printf("%d %d", i, j);
				tmp = 1;
				break;
			}
		}
		if (tmp == 1)
			break;
	}
	if (tmp == 0) 
		printf("none");

	return 0;
}
