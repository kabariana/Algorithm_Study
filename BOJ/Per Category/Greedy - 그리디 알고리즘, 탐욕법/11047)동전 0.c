// 백준 11047
// 입력으로 들어오는 동전들은 오름차순으로 정렬된 상태
// 필요한 동전의 개수의 최소값을 구하는 문제이니까 최대 값의 동전부터
// 차례대로 총 금액에서 빼줌

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
