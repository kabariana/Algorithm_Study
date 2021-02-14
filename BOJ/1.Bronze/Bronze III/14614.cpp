#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    std::string str;

    std::cin >> a >> b >> str;

    if((str[str.size()-1]-'0')%2 == 1)
        std::cout << (a^b) << '\n';
    else
        std::cout << a << '\n';
    return 0;
}