#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int b, w, s;
    std::cin >> b >> w;
    s = std::sqrt((b == w? b + w : b < w ? 2*b + 1:2*w + 1) + 1e-9);
    std::cout << (s == 0?"Impossible":std::to_string(s));
    return 0;
}