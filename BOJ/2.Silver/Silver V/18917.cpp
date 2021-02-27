#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int m;
    ll x, sum = 0, xr = 0;
    std::cin >> m;

    while(m--)
    {
        int query;
        std::cin >> query;

        switch(query)
        {
        case 1:
            std::cin >> x;
            sum+=x;
            xr^=x;
            break;
        case 2:
            std::cin >> x;
            sum-=x;
            xr^=x;
            break;
        case 3:
            std::cout << sum << '\n';
            break;
        case 4:
            std::cout << xr << '\n';
            break;
        }
    }
    return 0;
}