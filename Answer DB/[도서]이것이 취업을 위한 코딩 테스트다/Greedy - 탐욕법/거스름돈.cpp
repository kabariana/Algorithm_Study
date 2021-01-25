// 예제 3-1
// 가장 큰 화폐단위부터 내림차순 정렬되어있음
// 애초에 내림차순으로 정렬되어 있으니 별도의 정렬과정은 필요하지 않음

#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, cnt = 0;
	int arr[4] = { 500, 100, 50, 10 };

	std::cin >> n;

	for (int i = 0; i < 4; i++)
	{
		int temp = arr[i];
		cnt += n / arr[i];
		n %= arr[i];
	}
	std::cout << cnt;
	return 0;
}
