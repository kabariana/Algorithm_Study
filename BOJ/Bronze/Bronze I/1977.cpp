#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int m, n;
    int sum = 0, min = INT_MAX;

    std::cin >> m >> n;

    for(int i = 0; i<=100; i++)
    {
        if(i*i >= m && i*i <=n)
        {
            sum += i*i;
            min = std::min(min, i*i);
        }
    }

    if(sum == 0)
        std::cout << "-1";
    else
        std::cout << sum << '\n' << min;
    return 0;
}