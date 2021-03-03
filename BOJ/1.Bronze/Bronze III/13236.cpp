#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::cout << n << ' ';
    while(true)
    {
        if(n == 1)
            break;
        if(n%2 == 0)
        {
            n/=2;
            std::cout << n << ' ';
        }
        else
        {
            n = 3*n + 1;
            std::cout << n << ' ';
        }
    }
    return 0;
}