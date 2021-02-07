#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int T;
	std::cin >> T;

	while (T--)
	{
		int a, b, result = 1;
		std::cin >> a >> b;

		while (b--)
			result = result * a % 10;

		if (result == 0)
			std::cout << "10\n";
		else
			std::cout << result << '\n';
	}
	return 0;
}