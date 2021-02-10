#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    std::cout << str[0];
    for(int i = 1; str[i]; i++)
    {
        if(str[i]=='-' && (str[i+1] >= 'A' && str[i+1] <= 'Z'))
            std::cout << str[i+1];
    }
    return 0;
}