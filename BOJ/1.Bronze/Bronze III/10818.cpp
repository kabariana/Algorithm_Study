#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n;
    std::cin >> n;
    int maxv = -1000001, minv = 1000001;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;

        maxv = std::max(num, maxv);
        minv = std::min(num, minv);
    }
    std::cout << minv << ' '<<maxv;
    return 0;
}