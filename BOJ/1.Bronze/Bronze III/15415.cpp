#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int w, n, sum = 0;
    std::cin >> w >> n;
    while(n--)
    {
        int x, y;
        std::cin >> x >> y;
        sum += (x*y);
    }
    std::cout << sum / w;
    return 0;
}