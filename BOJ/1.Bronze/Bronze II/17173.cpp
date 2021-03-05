#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    std::vector<int> v(n+1, 0);

    for(int i = 0; i<m; i++)
    {
        int k;
        std::cin >> k;
        for(int i = k; i<=n; i+=k)
            v[i] = 1;
    }
    int sum = 0;
    for(int i = 1; i<=n; i++)
        if(v[i])
            sum+=i;
    std::cout << sum;
    return 0;
}