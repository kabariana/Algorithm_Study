// ���� 5585
// ���� �׼��� ū �ͺ��� ���ʷ� �迭 �ʱ�ȭ
// �Ž������� 0���� Ŭ ���� ���Ͽ� �ܾ��� �׼��� ū ������ ���� ũ��
// ���� ���� +1, �ܾ� - �ش� ������ŭ�� �ݾ�
// �ܾ��� ������ �׼��� ���� ������ ���� �׼��� ��������

#include <iostream>
#include <algorithm>

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, cnt = 0, i = 0;
	int arr[6] = { 500, 100, 50, 10, 5, 1 };

	std::cin >> n;
	n = 1000 - n;

	while (n)
	{
		if (n >= arr[i])
		{
			n -= arr[i];
			cnt++;
		}
		else
			i++;
	}
	
	std::cout << cnt;

	return 0;
}
