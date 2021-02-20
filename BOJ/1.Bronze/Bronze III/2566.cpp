#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int arr[9][9], i_ind, j_ind;
	int max = INT_MIN;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> arr[i][j];

			if (max < arr[i][j])
			{
				max = arr[i][j];
				i_ind = i;
				j_ind = j;
			}
		}
	}
	std::cout << max << '\n';
	std::cout << i_ind + 1 << ' ' << j_ind + 1;
	return 0;
}