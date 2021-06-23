#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::bitset<10001> v;

    while(n--)
    {
        int x, y;
        std::cin >> x >> y;
        for(int i = x; i<y; i++)
            v[i] = 1;
    }
    std::cout << v.count() <<'\n';
    return 0;
}