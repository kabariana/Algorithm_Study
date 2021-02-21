#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);
	int a, b;

	while (true)
	{
		std::cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		if (b % a == 0)
			std::cout << "factor\n";
		else if (a % b == 0)
			std::cout << "multiple\n";
		else
			std::cout << "neither\n";
	}
	return 0;
}