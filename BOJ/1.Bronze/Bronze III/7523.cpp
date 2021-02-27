#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        ll a, b, n, res = 0;
        std::cin >> a >> b;
        if(a >= 0)
            res = (b*(b+1))/2 - (a*(a+1))/2 + a;
        else if(a < 0)
        {
            a = std::abs(a);
            if(b >= 0)
                res = (b*(b+1))/2 - (a*(a+1))/2;
            else if(b<0)
            {
                b = std::abs(b);
                res = -(b*(b+1))/2 + (a*(a+1))/2 + b;
                res*=-1;
            }
        }
        std::cout << "Scenario #"<< i <<":\n";
        std::cout << res <<'\n';
        std::cout << '\n';
    }
    return 0;
}