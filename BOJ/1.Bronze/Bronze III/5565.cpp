#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int n, temp, sum = 0;
	std::cin >> n;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> temp;
		sum += temp;
	}

	std::cout << n - sum;
	return 0;
}