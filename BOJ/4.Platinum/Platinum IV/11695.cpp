// NIM 게임
#include <bits/stdc++.h>

typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    ll s, res = 0;
    std::cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        s = 0;
        for(int j = 0, x; j < m; j++) std::cin >> x, s += x;
        res^=s;
    }
    if(res)
        std::cout << "august14\n";
    else
        std::cout << "ainta\n";
    return 0;
}