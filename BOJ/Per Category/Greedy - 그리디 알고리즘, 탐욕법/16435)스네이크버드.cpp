// 백준 16435
// 왜 탐욕 알고리즘 카테고리로 들어가있는지는 잘 모르겠지만
// 오름차순으로 정렬한 이후에, 입력받은 길이보다 작은 경우
// 몸길이+1

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
