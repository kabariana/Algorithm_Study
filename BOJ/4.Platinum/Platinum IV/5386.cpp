// k가 홀수면 s의 홀짝에 따라 승패가 갈림
// k가 짝수면 스프라그 - 그런디
// k = 2 -> 0, 1, 2, 0, 1, 2
// k = 4 -> 0, 1, 0, 1, 2, 0, 1, 0, 1, 2
// k = 6 -> 0, 1, 0, 1, 0, 1, 2, 0, 1, 0, 1, 0, 1, 2

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