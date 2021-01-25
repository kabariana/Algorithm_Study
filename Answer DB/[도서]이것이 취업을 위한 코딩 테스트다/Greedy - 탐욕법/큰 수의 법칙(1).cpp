// 예제 3-2) 큰 수의 법칙 - 값이 작을 경우
// n 크기만큼 동적할당을 한 이후에 배열을 입력받은 값으로 초기화
// 값이 최대가 되기 위해서는 큰 값 2개가 필요하니 오름차순으로 정렬한
// 배열에서 우측 끝의 2개의 요소를 각각 저장
// 가장 큰 값을 k번 반복하여 더한 후, 그 다음 큰 값을 1번만 더하면
// k번 이상으로 연속되지 않음

#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0), std::cout.tie(0);

	int n, m, k;
	std::cin >> n >> m >> k;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	std::sort(arr, arr + n);

	int first = arr[n - 1], second = arr[n - 2];
	int sum = 0;

	while (1)
	{
		for (int i = 0; i < k; i++)
		{
			if (m == 0)
				break;
			sum += first;
			m -= 1; // 더할 때마다 m을 하나씩 감소
		}
		if (m == 0)
			break;
		sum += second;
		m -= 1;
	}
	std::cout << sum;
	delete[] arr;
	return 0;
}