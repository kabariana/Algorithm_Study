// 백준 11399번
// 모든 사람들이 돈을 빠르게 뽑기 위해서는 뒷 사람들이 기다리는 시간을 줄이면 됨
// 인출하는데 걸리는 시간이 빠른 사람부터 뽑으면 되니까 오름차순으로 정렬
// 정렬한 뒤에 합을 구한 것이 바로 문제에서 요구하는 답

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

	// 정렬
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
