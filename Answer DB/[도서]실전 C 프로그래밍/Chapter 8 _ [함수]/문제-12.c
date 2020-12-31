#include <stdio.h>

void print_line(int x, int y, int z) 
{
	for (int i = 0; i < x; i++)
		printf(" ");
	for (int j = 0; j < y; j++)
		printf("*");
	for (int k = 0; k < z; k++)
		printf(" ");
	printf("\n");
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) 
		print_line((2 * (N + 1 - i) - 1) / 2, 2 * i - 1, (2 * (N + 1 - i) - 1) / 2);
	return 0;
}
