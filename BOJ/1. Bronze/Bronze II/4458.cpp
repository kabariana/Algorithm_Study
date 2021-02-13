#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    while(n--)
    {
        std::string str;
        std::getline(std::cin, str);

        if(str[0] >= 'a' && str[0] <= 'z')
            str[0]-=32;
        std::cout << str << '\n';
    }
    return 0;
}