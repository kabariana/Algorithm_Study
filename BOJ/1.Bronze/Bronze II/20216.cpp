#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;

    while(true)
    {
        std::getline(std::cin, str);
        char c = str.back();
        if(c == '?')
            std::cout << "Quack!\n";
        else if(c == '.')
            std::cout << "*Nod*\n";
        else if(str == "I quacked the code!")
            break;
    }
    return 0;
}