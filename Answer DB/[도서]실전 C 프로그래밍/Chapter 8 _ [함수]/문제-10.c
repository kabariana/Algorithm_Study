#include <stdio.h>

int n;

void die1(int);
void die2(int, int);
void die3(int, int, int);

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= 6; i++)
		die1(i);

	return 0;
}

void die1(int x)
{
		die2(n, x);
}

void die2(int x, int y)
{
	for (int i = 1; i <= 6; i++)
		die3(x, y, i);
}
void die3(int x, int y, int z)
{
	for (int i = 1; i <= 6; i++)
		if(n == y+z+i)
			printf("%d %d %d\n", y, z, i);
}
