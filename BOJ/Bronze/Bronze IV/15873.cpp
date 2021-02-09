#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;
    int result = 0;

    for(int i = 0; i<str.size(); i++)
    {
        if(str[i] - '0' == 1)
        {
            if(i+1 < str.size())
            {
                if(str[i+1] - '0' == 0)
                    result += 10, i++;
                else
                    result += str[i] - '0';
            }
            else
                result += str[i] - '0';
        }
        else
            result += str[i] - '0';
    } 
    std::cout << result;
    return 0;
}