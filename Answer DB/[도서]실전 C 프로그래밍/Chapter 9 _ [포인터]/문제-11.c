#include <stdio.h>

void strcopy(char* a, char* b)
{
	while (*b)
		*a++ = *b++;
}

int main()
{
	char a[7], b[7] = { 0 };
	char* p;

	for (p = b; p < b + 6; p++)
		scanf(" %c", p);

	strcopy(a, b);

	for (p = a; p < a + 6; p++)
		printf("%c", *p);

	return 0;
}
