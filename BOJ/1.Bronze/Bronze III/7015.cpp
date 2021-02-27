#include <bits/stdc++.h>

int func(int y, int m, int d)
{
    int sum = 0;
    sum += (y-1)*195; 
    sum += (y-1)/3*5; 
    sum += (m-1)*20;
    if(y%3 != 0)
        sum-=(m-1)/2;
    sum+=d;
    return sum;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int y, m, d;
        std::cin >> y >> m >> d;
        std::cout << func(1000, 1, 1) - func(y, m, d) << '\n';
    }
    return 0;
}