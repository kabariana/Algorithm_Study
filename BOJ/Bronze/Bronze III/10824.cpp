#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str[4];
    for(int i = 0; i < 4; i++)
        std::cin >> str[i];
    long long tmp1, tmp2;
    tmp1 = std::stoi(str[0])*std::pow(10, str[1].size()) + std::stoi(str[1]);
    tmp2 = std::stoi(str[2])*std::pow(10, str[3].size()) + std::stoi(str[3]);
    std::cout << tmp1 + tmp2;
    return 0;
}
