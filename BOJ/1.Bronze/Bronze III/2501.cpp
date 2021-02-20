#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int n, k;
	std::vector<int> v;
	std::cin >> n >> k;

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			v.push_back(i);

	if (k > v.size())
		std::cout << 0;
	else
		std::cout << v[k-1];
	return 0;
}