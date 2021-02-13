#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();

    while(T--)
    {
        std::string str;
        std::getline(std::cin, str);
        str+=' ';

        std::stack<char> s;
        for(int i = 0; str[i]; i++)
        {
            if(str[i] == ' ')
            {
                while(!s.empty())
                {
                    std::cout << s.top();
                    s.pop();
                }
                std::cout << str[i];
            }
            else
                s.push(str[i]);
        }
        std::cout << '\n';
    }
    return 0;
}