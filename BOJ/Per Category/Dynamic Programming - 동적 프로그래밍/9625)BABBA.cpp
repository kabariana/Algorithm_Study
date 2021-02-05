// ���� 9625
// ���� ���α׷��� ����
// k�� ������ �� a�� ������ ���� b
// k�� ������ �� b�� ������ ���� a + ���� b

#include <iostream>
#include <algorithm>
#define MAX 45

int a_cnt[MAX];
int b_cnt[MAX];

void func(int n)
{
	a_cnt[0] = 1;
	b_cnt[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		a_cnt[i] = b_cnt[i-1];
		b_cnt[i] = a_cnt[i - 1] + b_cnt[i - 1];
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n;
	std::cin >> n;

	func(n);

	std::cout << a_cnt[n] << " " << b_cnt[n];
	return 0;
}
