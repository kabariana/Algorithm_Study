#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, a, b, sum1 = 0, sum2 = 0;

    std::cin >> n;
    while(n--)
    {
        std::cin >> a >> b;
        if(a > b)
            sum1 += (a + b);
        else if (a == b)
        {
            sum1 += a;
            sum2 += b;
        }
        else
            sum2 += (a + b);
    }
    std::cout << sum1 << ' ' << sum2 << '\n';
}