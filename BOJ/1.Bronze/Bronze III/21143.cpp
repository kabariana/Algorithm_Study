#include <bits/stdc++.h>

int alpha[26];

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        if(alpha[str[i] - 'a'])
        {
            std::cout << "0";
            return 0;
        }
        ++alpha[str[i]-'a'];
    }
    std::cout << "1";
    return 0;
}