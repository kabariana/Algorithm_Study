#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -=32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] +=32;
    }
    std::cout << str;
    return 0;
}