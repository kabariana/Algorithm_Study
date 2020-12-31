#include <stdio.h>

int a, b, c;

int count_strike(int x, int y, int z)
{
	int r = 0;
	if (x == a) r++;
	if (y == b) r++;
	if (z == c) r++;
	return r;
}

int count_ball(int x, int y, int z)
{
	int r = 0;
	if (x == b) r++;
	if (x == c) r++;
	if (y == a) r++;
	if (y == c) r++;
	if (z == a) r++;
	if (z == b) r++;
	return r;
}

int main()
{
	int x, y, z;
	scanf("%d %d %d", &a, &b, &c);
	
	while (1)
	{
		scanf("%d %d %d", &x, &y, &z);
		printf("%dS%dB\n", count_strike(x, y, z), count_ball(x, y, z));
		if (x == a && y == b && c == z)
			break;
	}
	return 0;
}
