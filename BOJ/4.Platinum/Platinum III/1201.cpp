#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, k;
    std::cin >> n >> m >> k;

    if(m + k - 1 <= n && n <= m * k)
    {
        std::vector<int> v(n);
        for(int i = 0; i < n; i++)
            v[i] = i + 1;
        
        int index = 0;

        for(int i = 1; i<= m; i++)
        {
            int tmp = std::min(index + k, n - m + i);
            std::reverse(v.begin() + index, v.begin() + tmp);
            index = tmp;
        }
        for(int i = 0; i < n; i++)
            std::cout << v[i] << ' ';
        std::cout << '\n';
    }
    else
        std::cout << -1 << '\n';
    return 0;
}