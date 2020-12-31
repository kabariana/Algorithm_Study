// 사용자에게서 0~5 까지의 숫자 세 개 입력 받아, 각 숫자에 해당하는 영어를 출력하시오.
// 2차원 배열을 사용하시오. char x[6][5] = { 'Z', 'E', 'R', 'O', '-', 'O', 'N', ... };
#include <stdio.h>

int main() {

	char  ch[6][5] = { 
		{'Z','E','R','O','-'},
		{'O','N','E','-','-'},
		{'T','W','O','-','-'},
		{'T','H','R','E','E'},
		{'F','O','U','R','-'},
		{'F','I','V','E','-'} 
	};
	int input;
	for (int i = 0; i < 3; i++) 
	{
		scanf("%d", &input);
		for (int j = 0; j < 5; j++) 
			printf("%c", ch[input][j]);
		printf("\n");
	}
	return 0;
}
