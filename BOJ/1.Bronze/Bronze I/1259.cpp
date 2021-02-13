#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int flag = true;
        std::string str;
        std::cin >> str;

        if(str == "0")
            break;
        
        for(int i = 0; str[i]; i++)
        {
            if(str[i] != str[str.size()-1-i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
    return 0;
}