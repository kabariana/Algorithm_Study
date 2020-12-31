#include <stdio.h>

int main()
{
	char ch[20];
	char *ptr = ch;

	gets_s(ch);

	while (*ptr)
	{
		if (*ptr == '#')
		{
			ptr--;
			break;
		}
		ptr++;
	}

	while (ptr >= ch)
		putchar(*ptr--);
	return 0;
}
