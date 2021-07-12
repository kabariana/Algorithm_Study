#include <bits/stdc++.h>

int conv(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n/=10;
    }
    return sum;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    while(true)
    {
        std::cin >> n;
        if(n == 0)
            break;

        while(n > 9)
        {
            n = conv(n);
        }
        std::cout << n << '\n';
    }
    return 0;
    
}