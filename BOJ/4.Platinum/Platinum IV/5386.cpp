#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, s, k;
    std::cin >> TC;

    while (TC--)
    {
        std::cin >> s >> k; 
        if (k & 1) // odd
            std::cout << (s & 1) << '\n';
        else
        {
            s %= (k + 1);
            if(s == k)
                std::cout << k << '\n';
            else
                std::cout << (s & 1) << '\n';
        }
    }
    return 0;
}