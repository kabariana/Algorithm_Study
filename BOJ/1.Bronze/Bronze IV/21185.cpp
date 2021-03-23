#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;

	if (n % 4 == 0)
		std::cout << "Even";
	else if (n % 4 == 2)
		std::cout << "Odd";
	else
		std::cout << "Either";
	return 0;
}