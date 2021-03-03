#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    while(N--)
    {
        std::string str;
        std::cin >> str;
        std::cout << str.size() << '\n';
    }
    return 0;
}