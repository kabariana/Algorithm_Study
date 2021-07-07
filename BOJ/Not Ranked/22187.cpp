#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::stack<char> S;

    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] == '(')
        {
            int k = i + 1;
            while(true)
            {
                if(str[k] == ')')
                    break;
                S.push(str[k]);
                k++;
            }
            i = k-1;
        }
        else if(str[i] == ')')
        {
            while(!S.empty())
            {
                std::cout << S.top();
                S.pop();
            }
        }
        else
            std::cout << str[i];
    }
    return 0;
}