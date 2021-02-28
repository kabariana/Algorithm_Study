#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int x, w, cnt = 0;
        std::cin >> x >> w;
        while(x<w)
        {
            cnt++;
            x*=2;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}