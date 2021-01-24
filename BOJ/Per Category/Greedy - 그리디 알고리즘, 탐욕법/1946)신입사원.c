// ���� 1946
// ���� �������� ���� ������ �� ���Ŀ� ���� 1���� ���� ����� �������
// �ٸ� ����� ���� ����� ���� 1���� ���� ������� ���� �� ä��Ǵ� ���Ի�� �� +1
// ������ �հݵ� ����� ���� ����� ������Ʈ

#include <iostream>
#include <algorithm>
#define MAX 100000

std::pair<int, int> emp[MAX];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);
	
	int T, N, result, rank;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N;
		for (int i = 0; i < N; i++)
			std::cin >> emp[i].first >> emp[i].second;

		// �����ɻ� ���� ������ ����
		std::sort(emp, emp + N);

		// �����ɻ� ���� 1���� ������ ����
		result = 1;
		rank = emp[0].second; // �����ɻ� ���� 1���� ���� ���

		for (int i = 1; i < N; i++)
		{
			if (emp[i].second < rank)
			{
				result++;
				// ���� ��� ������Ʈ
				rank = emp[i].second;
			}
		}
		std::cout << result << '\n';
	}
	return 0;
}

