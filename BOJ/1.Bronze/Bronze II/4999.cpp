#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str1, str2;
    
    std::cin >> str1 >> str2;
    if(str1.size() >= str2.size())
        std::cout << "go";
    else
        std::cout << "no";
}