#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double t, p, drain;
    double result;
    std::cin >> t >> p;

    if(p >= 20)
    {
        drain = (100-p)/t;
        result = (((p - 20)/drain) + (20/(drain/2)));
        std::cout << result;
    }
    else
    {
        drain = (80 + (20 - p)*2)/t;
        result = (p/(drain/2));
        std::cout << result;
    }
    return 0;
}