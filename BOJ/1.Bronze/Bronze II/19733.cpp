#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    int n = std::count(str.begin(), str.end(), 'A');
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        res++;
        n -= i;
    }
    std::cout << res << '\n';
    return 0;
}