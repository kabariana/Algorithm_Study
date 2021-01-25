// 백준 5585
// 동전 액수가 큰 것부터 차례로 배열 초기화
// 거스름돈이 0보다 클 때에 대하여 잔액이 액수가 큰 동전에 비해 크면
// 동전 개수 +1, 잔액 - 해당 동전만큼의 금액
// 잔액이 동전의 액수에 비해 작으면 다음 액수의 동전으로

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

	int n, cnt = 0, i = 0;
	int arr[6] = { 500, 100, 50, 10, 5, 1 };

	std::cin >> n;
	n = 1000 - n;

	while (n)
	{
		if (n >= arr[i])
		{
			n -= arr[i];
			cnt++;
		}
		else
			i++;
	}
	
	std::cout << cnt;

	return 0;
}
