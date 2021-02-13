#include <stdio.h>
#include <math.h>

int main()
{
	double n1, n2, n12, ans;

	scanf("%lf %lf %lf", &n1, &n2, &n12);
	ans = ((n1 + 1) * (n2 + 1) / (n12 + 1)) - 1;
	printf("%d", (int)floor(ans));
	return 0;
}
