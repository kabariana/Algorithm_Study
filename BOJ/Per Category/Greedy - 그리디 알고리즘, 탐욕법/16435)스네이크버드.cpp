// ���� 16435
// �� Ž�� �˰����� ī�װ����� ���ִ����� �� �𸣰�����
// ������������ ������ ���Ŀ�, �Է¹��� ���̺��� ���� ���
// ������+1

#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, l;
	int* arr;

	std::cin >> n >> l;

	arr = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	std::sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		if (l >= arr[i])
			l++;

	std::cout << l;
	delete[] arr;
	return 0;
}