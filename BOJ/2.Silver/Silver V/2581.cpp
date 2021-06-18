#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int m, n, min, sum = 0;
    std::cin >> m >> n;
    min = n;

    for(int i = m; i<=n; i++)
    {
        for(int j = 2; j<=i; j++)
        {
            if(i % j == 0)
            {
                if(i == 2)
                {
                    min = 2;
                    sum += 2;
                }
                break;
            }
            else
            {
                if(j == i - 1)
                {
                    if(i <min)
                        min = i;
                    sum+=i;
                }
            }
        }
    }
    if(sum == 0)
        std::cout << -1 <<'\n';
    else
        std::cout << sum << '\n' << min <<'\n';
    return 0;
}