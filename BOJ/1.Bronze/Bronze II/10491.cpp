#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::regex re(R"(.*problem.*)", std::regex::icase);
    while(std::getline(std::cin, str))
    {
        if(std::regex_match(str, re))
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
    return 0;
}