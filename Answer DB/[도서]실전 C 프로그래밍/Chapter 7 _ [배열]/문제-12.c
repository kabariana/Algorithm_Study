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
