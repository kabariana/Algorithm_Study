// 백준 1758
// 팁의 최대값을 구하려면 팁을 많이 주는 사람을 기준으로 내림차순해야됨
// 음수일 때는 0을 더함

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
	// 정수 범위를 넘어간다는 것을 고려해야 됨
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
