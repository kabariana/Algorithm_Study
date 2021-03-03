#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int maxv = 0, minv = 1000001;
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