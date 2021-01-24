// ���� 11047
// �Է����� ������ �������� ������������ ���ĵ� ����
// �ʿ��� ������ ������ �ּҰ��� ���ϴ� �����̴ϱ� �ִ� ���� ��������
// ���ʴ�� �� �ݾ׿��� ����

#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, k, result = 0;
	std::cin >> n >> k;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	for (int i = n - 1; i >= 0; i--)
	{
		result += k / arr[i];
		k %= arr[i];
	}

	std::cout << result;

	delete[] arr;
}
