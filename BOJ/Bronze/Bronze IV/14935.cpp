#include <bits/stdc++.h>

std::string f(std::string x)
{
    std::string str;
    str = ((x[0]) - '0' * x.size()) + '0';
    return str;
}

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.size(); i++)
        str = f(str);
    if(str.size() == 1)
        std::cout << "FA";
    else
        std::cout << "NFA";
    return 0;
}