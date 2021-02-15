#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    while(n--)
    {
        std::string str;
        std::cin >> str;
        bool flag = true;
        for(int i = 0; i < str.size()/2; i++)
        {
            if(str[i] != str[str.size()-1-i])
                flag = false;
            else
                flag = true;
        }
        if(flag)
            std::cout <<"Do-it\n";
        else
            std::cout << "Do-it-Not\n";
    }
    return 0;
}