#include <stdio.h>

int main()
{
	char ch[8] = { NULL };
	int cnt = 0;

	scanf("%s", &ch);

	for (int i = 0; i < 5; i++)
	{
		if (ch[i] == 'c') {
			if (ch[i + 1] == 'a') {
				if (ch[i + 2] == 't')
					cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
