#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::string str;

    std::cin >> n >> str;

    for(int i = n-5; i < n; i++)
        std::cout << str[i];
    std::cout << '\n';

    return 0;
}