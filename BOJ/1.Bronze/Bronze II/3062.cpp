#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int n;
        std::cin >> n;

        std::string str = std::to_string(n);
        std::reverse(str.begin(), str.end());
        int temp = std::atoi(str.c_str());

        std::string s = std::to_string(n+temp);
        bool flag = true;
        for(int i = 0 ; s[i]; i++)
        {
            if(s[i] != s[s.size()-1-i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}