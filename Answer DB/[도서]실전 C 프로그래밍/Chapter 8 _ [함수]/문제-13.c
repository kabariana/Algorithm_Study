#include <stdio.h>

int count_3(int x)
{
	int i = 0, result = 0; 
	while (i <= x)
	{
		for (int j = i; j != 0; j /= 10)
			if (j % 10 == 3) 
				result++;
		i++;
	}
	return result;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", count_3(n));
	return 0;
}
