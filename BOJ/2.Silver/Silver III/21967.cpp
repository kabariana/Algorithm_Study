#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    int res = 0;
    for(int i = 1; i <= 8; i++)
    {
        int tmp = i + 2, cnt = 0;
        for(auto j : v)
        {
            if(j < i || j > tmp)
                cnt = 0;
            else
                res = std::max(res, ++cnt);
        }
    }
    std::cout << res << '\n';
    return 0;
}