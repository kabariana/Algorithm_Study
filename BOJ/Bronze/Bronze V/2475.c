#include <stdio.h>

int main()
{
	int a, sum=0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		sum += a*a;
	}
	printf("%d", sum % 10);
	return 0;
}
