#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000000];
	int r = 0;
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
		r = (r * 10 + (str[i] - '0')) % 20000303;

	printf("%d", r);
	return 0;
}
