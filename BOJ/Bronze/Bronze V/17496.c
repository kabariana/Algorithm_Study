#include <stdio.h>

int main()
{
	int a, b, c, d, temp;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	temp = a / b;
	if (a % b == 0) temp--;

	printf("%d", temp * c * d);
	return 0;
}
