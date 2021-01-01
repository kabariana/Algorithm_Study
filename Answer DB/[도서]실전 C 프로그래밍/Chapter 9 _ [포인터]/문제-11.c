#include <stdio.h>

void strcopy(char* a, char* b)
{
	for (char* p = a, *p1 = b; p < a + 6; p++, p1++)
		*p = *p1;
}

int main()
{
	char a[6], b[6];
	char* p;

	for (p = b; p < b + 6; p++)
		scanf(" %c", p);

	strcopy(a, b);

	for (p = a; p < a + 6; p++)
		printf("%c", *p);

	return 0;
}
