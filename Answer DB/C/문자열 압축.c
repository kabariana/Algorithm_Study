#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


void solution(const char* s) {
	// 동적할당을 위한 크기 검사
	int size = 1;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] != s[i + 1])
			size++;
	if (s[0] == '0')
		size--;

	char* answer = (char*)malloc(sizeof(char)*size);

	int cnt = 0;

	if (s[0] == '1')
	{
		answer[0] = '1';
		int j = 1;
		printf("1");
		for (int i = 0; s[i] != '\0'; i++)
		{
			cnt++;
			if (s[i] != s[i + 1])
			{
				printf("%c", cnt+64);
				cnt = 0;
			}
		}
	}
	else
	{
		int j = 0;
		for (int i = 0; s[i]!='\0'; i++)
		{
			cnt++;
			if (s[i] != s[i + 1])
			{
				printf("%c", cnt+64);
				cnt = 0;
			}
		}
	}
}

int main() {
	char s[10000] = "";
	char* answer;

	scanf("%s", s);
	solution(s);
	return 0;
}

