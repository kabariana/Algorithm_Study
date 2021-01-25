// 예제 3-3) 숫자 카드 게임 
// 각 행마다 가장 작은 수를 찾은 뒤에 그 수 중에서 가장 큰 수

#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, m, miv, result=0;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		miv = 10001;
		for (int j = 0; j < m; j++)
		{
			int temp;
			std::cin >> temp;
			miv = std::min(miv, temp);
		}
		result = std::max(result, miv);
	}
	std::cout << result;
	return 0;
}