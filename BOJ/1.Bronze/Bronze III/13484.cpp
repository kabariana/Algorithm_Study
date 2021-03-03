#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int x, n;
    std::cin >> x >> n;
    int sum = x;
    for(int i = 0; i<n; i++)
    {
        int p;
        std::cin >> p;
        sum+=(x-p); 
    }
    std::cout << sum << '\n';
    return 0;
}