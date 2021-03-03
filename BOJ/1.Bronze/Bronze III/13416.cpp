#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int T;
    std::cin >> T;

    while(T--)
    {
        int n, sum = 0;
        std::cin >> n;
        for(int i = 0; i<n; i++)
        {
            int maxv = INT_MIN;
            for(int j = 0; j <3; j++)
            {
                int num;
                std::cin >> num;
                maxv = std::max({num, maxv, 0});
            }
            sum+=maxv;
        }
        std::cout << sum << '\n';
    }
    return 0;
}