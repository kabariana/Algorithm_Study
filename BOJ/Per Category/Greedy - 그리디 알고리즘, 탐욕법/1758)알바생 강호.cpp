// ���� 1758
// ���� �ִ밪�� ���Ϸ��� ���� ���� �ִ� ����� �������� ���������ؾߵ�
// ������ ���� 0�� ����

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

	int n;
	// ���� ������ �Ѿ�ٴ� ���� �����ؾ� ��
	long long tip = 0;
	int* arr;

	std::cin >> n;

	arr = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	std::sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++)
	{
		int temp = arr[i] - i;
		if (temp <= 0)
			tip += 0;
		else
			tip += temp;
	}
	
	std::cout << tip;
	delete[] arr;
	return 0;
}
