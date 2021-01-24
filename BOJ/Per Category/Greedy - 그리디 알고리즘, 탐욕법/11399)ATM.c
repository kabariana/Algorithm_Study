// ���� 11399��
// ��� ������� ���� ������ �̱� ���ؼ��� �� ������� ��ٸ��� �ð��� ���̸� ��
// �����ϴµ� �ɸ��� �ð��� ���� ������� ������ �Ǵϱ� ������������ ����
// ������ �ڿ� ���� ���� ���� �ٷ� �������� �䱸�ϴ� ��

#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0); std::cout.tie(0);

	int n, result = 0;
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	// ����
	std::sort(arr, arr + n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			result += arr[j];
	}

	std::cout << result;
	delete[] arr;

	return 0;
}
