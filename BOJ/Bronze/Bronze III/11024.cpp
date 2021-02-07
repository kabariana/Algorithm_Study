#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();
    while(T--)
    {
        int sum = 0;
        std::string str;
        std::getline(std::cin, str);
        std::string temp = "";
        for(int i = 0; i<str.size(); i++)
        {
            temp+=str[i];
            if(str[i] == ' ' || i == str.size()-1)
            {
                sum+=std::stoi(temp);
                temp = "";
            }
        }
        std::cout << sum << '\n';
    }
    return 0;
}