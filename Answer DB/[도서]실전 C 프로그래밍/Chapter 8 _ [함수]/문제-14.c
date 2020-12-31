#include <stdio.h>

int is_prime(int x) {
	int cnt = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0 && x%x == 0) 
			cnt++;

	if (cnt == 2) 
		return 1;
	else 
		return 0;
}

int next_prime(int x) 
{
	int i = x + 1, j = 0;
	while (j < 5) 
	{
		if (is_prime(i) == 1) 
		{
			j++;
			return i;
		}
		i++;
	}
}

int main() 
{
	int n, m, tmp;
	scanf("%d %d", &n, &m);
	tmp = n;
	for (int i = 0; i < m; i++) 
	{
		printf(" %d", next_prime(tmp));
		tmp = next_prime(tmp);
	}

	return 0;
}
