// ���� 2839
// ���԰� �� ū(5kg) ���� �������� �ű��.
// ���� 5�� ������ �������� �װɷ� �������� �ƴϸ� 3kg ������ �ű�鼭 
// ��ü ������ - 3 �ݺ� <-- �� ���� 0������ �� -1 ���

#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, cnt = 0;
	std::cin >> n;

	while (1)
	{
		if (n % 5 == 0)
		{
			cnt += n / 5;
			std::cout << cnt;
			break;
		}
		n -= 3;
		cnt++;
		if (n < 0)
		{
			std::cout << "-1";
			break;
		}
	}
	return 0;
}
