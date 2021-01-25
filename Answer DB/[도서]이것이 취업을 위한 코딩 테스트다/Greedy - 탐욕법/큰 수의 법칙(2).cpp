// 예제 3-2) 큰 수의 법칙 - 값이 큰 경우 (벡터 사용)
// 규칙을 찾음
// 반복되는 수열의 길이 = K+1
// 즉, 반복 횟수  = M/(K+1)

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, m, k;
	std::vector<int> v;
	std::cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		v.push_back(temp);
	}

	std::sort(v.begin(), v.end());

	int first = v[n - 1], second = v[n - 2];
	int sum = 0;

	int cnt = (m / (k + 1)) * k;
	// 나누어 떨어지지 않는 경우
	cnt+=m%(k+1);

	sum += cnt * first;
	sum += (m - cnt) * second;

	std::cout << sum;
	return 0;
}