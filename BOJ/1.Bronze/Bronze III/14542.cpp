#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int z = 1;
    while(true)
    {
        int n;
        std::cin >> n;
        if(!n)
            break;
        int sum = 0;
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                int tmp;
                std::cin >> tmp;
                if(j == 1 || j == i || i == n)
                    sum+=tmp;
            }
        }
        std::cout << "Case #" << z++ << ":"<<sum<<'\n';
    }
    return 0;
}