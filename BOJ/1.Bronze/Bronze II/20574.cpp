#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, x, maxH = 1;
    std::cin >> n >> x;
    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    for(int i = 1, t = 1; i < n; i++)
    {
        if(v[i] - v[i-1] > x)
            t = 1;
        else
            maxH = std::max(maxH, ++t);
    }
    std::cout << maxH <<'\n';
    return 0;
}