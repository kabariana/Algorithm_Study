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
        bool flag = true;

        for(int i = 0; str[i]; i++)
        {
            if(std::toupper(str[i]) != std::toupper(str[str.size()-1-i]))
            {
                flag = false;
                break;
            }
        }
        if(flag)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
    return 0;
}