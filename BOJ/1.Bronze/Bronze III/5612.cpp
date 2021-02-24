#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    int tmp = m, res = m;
    while(n--)
    {
        int a, b;
        std::cin >> a >> b;
        tmp += (a-b);

        if(tmp < 0)
        {
            std::cout << "0";
            return 0;
        }
        res = std::max(tmp, res);
    }
    std::cout << res;
    return 0;   
}