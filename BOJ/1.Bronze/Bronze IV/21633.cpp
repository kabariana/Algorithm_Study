#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double n, res;
    std::cin >> n;
    res =  n*0.01 + 25;
    if(res > 2000)
        res = 2000;
    if(res < 100)
        res = 100;
    std::cout << std::fixed << std::setprecision(2) << res <<'\n';
    return 0;
}