#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    std::vector<int> v;

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        v.push_back(num);
    }

    for(int i = 0; i<m; i++)
    {
        int num;
        std::cin >> num;
        v.push_back(num);
    }

    std::sort(v.begin(), v.end());
    for(int i = 0; i<n+m; i++)
        std::cout << v[i] << '\n';
    return 0;
}