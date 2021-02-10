#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        std::string str;
        std::getline(std::cin, str);

        if(str == "END")
            break;
        
        std::reverse(str.begin(), str.end());
        std::cout << str << '\n';
    }
    return 0;
}