// 백준 2839
// 무게가 더 큰(5kg) 설탕 봉지부터 옮긴다.
// 만약 5로 나누어 떨어지면 그걸로 끝이지만 아니면 3kg 봉지로 옮기면서 
// 전체 설탕량 - 3 반복 <-- 이 값이 0이하일 시 -1 출력

#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, cnt = 0;
	std::cin >> n;

	while (1)
	{
		if (n % 5 == 0)
		{
			cnt += n / 5;
			std::cout << cnt;
			break;
		}
		n -= 3;
		cnt++;
		if (n < 0)
		{
			std::cout << "-1";
			break;
		}
	}
	return 0;
}
