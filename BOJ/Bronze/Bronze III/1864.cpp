#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    while(true)
    {
        std::cin >> str;
        int sum = 0, temp;
        if(str == "#")
            break;
        for(int i = 0; i < str.size(); i++)
        {
            int result = 1;
            for(int j = 1; j < str.size()-i; j++)
            {
                result *= 8;
            }
            switch(str[i])
            {
            case '-':
                temp = 0;
                break;
            case '\\':
                temp = 1;
                break;
            case '(':
                temp = 2;
                break;
            case '@':
                temp = 3;
                break;
            case '?':
                temp = 4;
                break;
            case '>':
                temp = 5;
                break;
            case '&':
                temp = 6;
                break;
            case '%':
                temp = 7;
                break;
            case '/':
                temp = -1;
                break;
            }
            sum += result*temp;
        }
        std::cout << sum << '\n';
    }
    return 0;
}