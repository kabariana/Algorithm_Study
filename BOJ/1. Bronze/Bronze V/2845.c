#include <stdio.h>

int main()
{
	int L, P, num;

	scanf("%d %d", &L, &P);
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		printf("%d ", num - L * P);
	}
	return 0;
}
