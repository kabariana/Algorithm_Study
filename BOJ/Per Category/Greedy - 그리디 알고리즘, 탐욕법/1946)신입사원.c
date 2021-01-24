// 백준 1946
// 서류 성적으로 먼저 정렬을 한 이후에 서류 1등의 면접 등수를 기반으로
// 다른 사람의 면접 등수가 서류 1등의 면접 등수보다 높을 시 채용되는 신입사원 수 +1
// 새로이 합격된 사람의 면접 등수로 업데이트

#include <iostream>
#include <algorithm>
#define MAX 100000

std::pair<int, int> emp[MAX];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);
	
	int T, N, result, rank;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N;
		for (int i = 0; i < N; i++)
			std::cin >> emp[i].first >> emp[i].second;

		// 서류심사 성적 순으로 정렬
		std::sort(emp, emp + N);

		// 서류심사 성적 1등은 무조건 선발
		result = 1;
		rank = emp[0].second; // 서류심사 성적 1등의 면접 등수

		for (int i = 1; i < N; i++)
		{
			if (emp[i].second < rank)
			{
				result++;
				// 면접 등수 업데이트
				rank = emp[i].second;
			}
		}
		std::cout << result << '\n';
	}
	return 0;
}

