#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();
    while(T--)
    {
        std::string str;
        std::cin >> str;
        bool check[26] = {false, };
        for(int i = 0; str[i]; i++)
        {
            if(check[str[i]-'A'] == true)
                continue;
            else
                check[str[i]-'A'] = true;
        }
        int sum = 0;
        for(int i = 0; i <26; i++)
            if(check[i]==false)
                sum+=(i+65);
        std::cout << sum <<'\n';
    }
    return 0;
}