#include <bits/stdc++.h>

std::vector<int> v(100001);

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, minv = INT_MAX;
    std::cin >> n;
    
    for(int i = 1; i<=n; i++)
    {
        std::cin >> v[i];
        if(i>=2)
            minv = std::min(minv, std::abs(v[i]-v[i-1]));
    }
    std::cout << minv;
    return 0;
}