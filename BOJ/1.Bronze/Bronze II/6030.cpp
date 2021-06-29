#include <bits/stdc++.h>

std::vector<int> divisor(int n)
{
    std::vector<int> ret;
    for(int i = 1; i<=n; i++)
        if(n % i == 0)
            ret.push_back(i);
    return ret;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int P, Q;
    std::cin >> P >> Q;
    for(auto x : divisor(P))
        for(auto y : divisor(Q))
            std::cout << x << ' ' << y << '\n';
    return 0;
}