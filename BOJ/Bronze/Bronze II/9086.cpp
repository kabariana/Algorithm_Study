#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();
    while(T--)
    {
        std::string str;
        std::cin >> str;

        std::cout << str[0] << str[str.size()-1] <<'\n';
    }
    return 0;
}