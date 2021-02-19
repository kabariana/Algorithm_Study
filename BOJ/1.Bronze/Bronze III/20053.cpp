#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int T;
    std::cin >> T;
    while(T--)
    {
        int n;
        std::cin >> n;
        
        int minv = INT_MAX, maxv = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            int num;
            std::cin >> num;

            minv = std::min(minv, num);
            maxv = std::max(maxv, num);
        }
        std::cout << minv << ' ' << maxv << '\n';
    }
    return 0;
}