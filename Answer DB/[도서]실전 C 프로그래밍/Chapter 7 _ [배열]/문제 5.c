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
