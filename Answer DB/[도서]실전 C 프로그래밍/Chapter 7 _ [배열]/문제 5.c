// 영어 문자 다섯개를 입력 받아서, 예시와 같이 한 번에 한 칸씩 
// shift해서 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
	char ch[5];
	char tmp;
	
	for (int i = 0; i < 5; i++)
		scanf("%c", &ch[i]);

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 5 - i; j < 5; j++) 
			printf("%c", ch[j]);
		for (int k = 0; k < 5 - i; k++) 
			printf("%c", ch[k]);
		printf("\n");
	}

	return 0;
}
