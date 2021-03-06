#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, res = 0;
    std::cin >> n;

    while(n--)
    {
        int num;
        std::cin >> num;
        res += (num == 2) || (num == 3);
    }
    std::cout << res;
    return 0;
}