#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int T;
	std::cin >> T;

	while (T--)
	{
		int num;
		std::cin >> num;
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
			{
				if (i != 0 && i != num - 1 && j != 0 && j != num - 1)
					std::cout << "J";
				else
					std::cout << "#";
			}
			std::cout << '\n';
		}
		std::cout << '\n';
	}
	return 0;
}