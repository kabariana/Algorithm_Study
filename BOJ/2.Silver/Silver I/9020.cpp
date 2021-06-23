// 에라토스테네스의 체, sieve
#include <bits/stdc++.h>

bool sieve[10001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, n, p1, p2;
    std::cin >> TC;

    while(TC--)
    {
        std::cin >> n;

        for(int j = 2; j<= n; j++)
            sieve[j] = true;
        
        for(int j = 2; j<=std::sqrt(n); j++)
        {
            if(sieve[j])
            {
                for(int k = j + j; k <= n; k+=j)
                    if(sieve[k])
                        sieve[k] = false;
            }
        }

        p1 = p2 = n/2;

        while(true)
        {
            if((p1 + p2 == n) && sieve[p1] && sieve[p2])   
            {
                std::cout << p1 << " " << p2 << '\n';
                break;
            }
            p1--;
            p2++;
        }
    }
    return 0;
}