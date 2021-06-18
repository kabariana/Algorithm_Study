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
        std::vector<int> v(n);
        for(int i = 0; i<n; i++)
            std::cin >> v[i];
        std::sort(v.begin(), v.end());
        std::cout << 2*(v.back() - v.front()) << '\n';
    }
    return 0;
}