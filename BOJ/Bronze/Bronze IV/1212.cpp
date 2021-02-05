#include <iostream>

int main(int argc, char* argv)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    for(int i = 0; i<str.size(); i++)
    {
        if(str[i] == '0')
        {
            if(i == 0)
                std::cout << "0";
            else
                std::cout << "000";
        }
        else if(str[i] == '1')
        {
            if(i == 0)
                std::cout << "1";
            else
                std::cout << "001";
        }
        else if(str[i] == '2')
        {
            if(i == 0)
                std::cout << "10";
            else
                std::cout << "010";
        }
        else if(str[i] == '3')
        {
            if(i == 0)
                std::cout << "11";
            else
                std::cout << "011";
        }
        else if(str[i] == '4')
            std::cout << "100";
        else if(str[i] == '5')
            std::cout << "101";
        else if(str[i] == '6')
            std::cout << "110";
        else if(str[i] == '7')
            std::cout << "111";
    }
    return 0;
}