#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str, temp;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        if(i>0 && (str.size() - i)%3 == 0)
            std::cout <<",";
        std::cout << str[i];
    }
    return 0;
}