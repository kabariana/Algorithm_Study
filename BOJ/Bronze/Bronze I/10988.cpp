#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    bool flag = true;
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] != str[str.size()-1-i])
        {
            flag = false;
            break;
        }    
    }
    if(flag)
        std::cout << "1";
    else
        std::cout << "0";
    return 0;
}