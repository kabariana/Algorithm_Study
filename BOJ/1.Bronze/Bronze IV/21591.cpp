#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout <<(a-c >= 2 && b-d >=2? 1:0);
    return 0;
}