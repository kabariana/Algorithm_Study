#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b;
    std::cin >> a >> b;

    int cnt = 0;

    while(true)
    {
        if(a > b)
        {
            std::cout << -1 << '\n';
            break;
        }

        if(a == b)
        {
            std::cout << cnt + 1 << '\n';
            break;
        }

        if( b % 10 == 1)
            b/=10;
        else if(b%2 == 0)
            b/=2;
        else
        {
            std::cout << -1 << '\n';
            break;
        }
        cnt++;
    }
    return 0;
}