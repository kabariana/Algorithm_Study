#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long n;
    int m;
    std::cin >> n >> m;
    if (n <= 5) 
    {
		for (int i = 2; i <= n; i++) 
        {
			m = (m + 1) % 2;
			std::cout << m << '\n';
		}
	}
    else
        std::cout << "Love is open door";



}