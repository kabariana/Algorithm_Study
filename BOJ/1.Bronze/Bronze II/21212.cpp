#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, res = INT_MAX;
    std::cin >> n;

    while(n--)
    {
        int x, y;
        std::cin >> x >> y;
        if(res > y / x)
            res = y/x;
    }
    std::cout << res <<'\n';
    return 0;
}