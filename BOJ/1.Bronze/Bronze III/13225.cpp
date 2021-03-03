#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int c;
    std::cin >> c;

    while(c--)
    {
        int n, cnt = 0;
        std::cin >> n;

        for(int i = 1; i<=n; i++)
            if(n%i == 0)
                cnt++;
        std::cout << n << ' ' << cnt << '\n';
    }
    return 0;
}