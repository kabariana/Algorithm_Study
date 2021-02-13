#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a1, b1, a2, b2;
    int c1, d1, c2, d2;
    int tmp1, tmp2, tmp3;

    std::cin >> a1 >> b1 >> a2 >> b2;
    std::cin >> c1 >> d1 >> c2 >> d2;

    tmp1 = std::max(a2, c2) - std::min(a1, c1);
    tmp2 = std::max(b2, d2) - std::min(b1, d1);
    tmp3 = std::max(tmp1, tmp2);
    std::cout << tmp3*tmp3;
    return 0;
}