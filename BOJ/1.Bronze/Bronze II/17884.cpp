#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> v(n+1, {1});
    for(int i = 2; i<=n; i++)
    {
        int d;
        std::cin >> d;
        v[d+1] = i;
    }
    for(int i = 0; i<n; i++)
        std::cout << v[i] <<' ';
    return 0;
}