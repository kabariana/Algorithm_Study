#include <stdio.h>

int main()
{
	char ch[10];
	int max, cnt[128] = { 0 };
	char* p, *index;

	for (p = ch; p < ch + 10; p++)
	{
		scanf(" %c", p);
		++*(cnt + *p);
	}

	max = *(cnt + *p);
	index = ch;
	for (p = ch; p < ch + 10; p++)
	{
		if (*(cnt + *p) > max)
		{
			max = *(cnt + *p);
			index = p;
		}
	}
	printf("%c %d", *index, *(cnt + *index));
	return 0;
}
