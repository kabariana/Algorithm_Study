#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::string tmp1 = str.substr(0, 6), tmp2 = str.substr(7, 4);
    std::cout << (std::stoi(str.substr(0, 2)) < 20 ? 20:19) - (str[6] == '+') << tmp1 << tmp2;
    return 0;
}