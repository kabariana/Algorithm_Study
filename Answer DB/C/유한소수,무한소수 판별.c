#include <stdio.h>

int getGcd(int a, int b)
{
	return b ? getGcd(b, a % b) : a;
}

int main()
{
	int a, b;
	int gcd, flag = 0;

	printf("���ڿ� �и� �Է��ϼ���. : ");
	scanf("%d %d", &a, &b);

	gcd = getGcd(a, b);

	a /= gcd;
	b /= gcd;

	for (int i = 2; i <= b; i++)
	{
		while (1)
		{
			if (b % i == 0)
			{
				b /= i;
				if (i != 2 && i != 5)
					flag = 1;
			}
			else
				break;
		}
	}

	if (flag)
		printf("���ѼҼ��Դϴ�.\n");
	else
		printf("���ѼҼ��Դϴ�.\n");
	return 0;
}
