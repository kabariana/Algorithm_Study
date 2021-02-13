#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        str[i] = std::toupper(str[i]);
    }
    std::cout << str;
    return 0;
}