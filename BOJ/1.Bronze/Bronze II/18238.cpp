#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    int res = 0;
    str = 'A' + str;

    for(int i = 0; i<str.size()-1; i++)
        res += std::min(std::abs((str[i+1]-'A')-(str[i]-'A')), 26-std::abs((str[i+1]-'A')-(str[i]-'A')));
    std::cout << res <<'\n';
    return 0;
}