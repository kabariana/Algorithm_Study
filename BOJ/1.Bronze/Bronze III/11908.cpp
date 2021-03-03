#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, sum = 0, maxv = -1;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        sum+=num;
        maxv = std::max(num, maxv);
    }
    std::cout << sum - maxv;
    return 0;
}