#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        ll n;
        std::cin >> n;

        std::string str = std::bitset<64>(n).to_string();
        ll x = 1;
        ll ans = 0;
        for(int i = str.size() - 1; i >= 0; i--)
        {
            if(str[i] == '1')
                ans += x;
            x *= 3;
        }
        std::cout << ans <<'\n';
    }
    return 0;
}