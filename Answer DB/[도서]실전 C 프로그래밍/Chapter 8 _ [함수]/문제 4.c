#include <stdio.h>

void print_row1(int x)
{
	for (int i = 0; i < x; i++)
		printf("%d", x);
}

void print_row2(int x)
{
	for (int i = 0; i < x; i++)
	{
		if (i == 0 || i == (x - 1))
			printf("%d", x);
		else
			printf(" ");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == (n - 1))
			print_row1(n);
		else
			print_row2(n);
		printf("\n");
	}
	return 0;
}
