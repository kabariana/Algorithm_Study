#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int R;
    std::cin >> R;

    std::cout << 21076 * (R < 13) <<'\n';
    return 0;
}