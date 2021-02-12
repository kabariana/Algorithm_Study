#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();
    while(T--)
    {
        int result = 0;
        std::string str;
        std::cin >> str;

        int temp = 1;
        for(int i = str.length()-1; i>=0; i--)
        {
            for(int j = 0; j < str.length()-1-i; j++)
                temp*=2;
            if(str[i] == '1')
                result += temp;
            temp = 1;
        }
        std::cout << result << '\n';
    }
    return 0;
}