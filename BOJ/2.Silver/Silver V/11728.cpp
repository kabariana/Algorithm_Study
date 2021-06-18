#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> v1(n), v2(m), v3(n + m);

    for(int i = 0; i<n; i++)
        std::cin >> v1[i];
    for(int i = 0; i<m; i++)
        std::cin >> v2[i];

    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for(auto i : v3)
        std::cout << i << ' ';
    return 0; 
}