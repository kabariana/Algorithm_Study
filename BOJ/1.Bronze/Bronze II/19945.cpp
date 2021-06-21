#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, res = 32;
    std::cin >> n;

    unsigned tmp = 1 << 31;

    while(tmp > 0)
    {
        if((n & tmp) == 0)
            res--;
        else
            break;
        tmp >>= 1;
    }
    std::cout << std::max(res, 1);
    return 0;
}