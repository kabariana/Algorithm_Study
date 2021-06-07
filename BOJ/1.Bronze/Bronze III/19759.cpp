#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int arr[25] = 
    {
        100, 200, 400, 800, 1600, 3200, 6400, 13000, 26000, 52000,
        104000, 208000, 416000, 832000, 1670000, 3340000, 6680000,
	    13360000, 26720000, 53440000, 106900000, 213800000, 427600000,
		855200000, 1710400000
    };

    int n;
    std::cin >> n;
    for(int i = 0; i<n; i++)
        std::cout << arr[i] << '\n';
    return 0;
}