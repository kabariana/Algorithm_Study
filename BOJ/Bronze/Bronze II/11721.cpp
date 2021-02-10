#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;


    for(int i = 0; str[i]; i++)
    {   
        std::cout << str[i];
        if((i+1)%10 == 0)
            std::cout << '\n';
    }
    return 0;
}