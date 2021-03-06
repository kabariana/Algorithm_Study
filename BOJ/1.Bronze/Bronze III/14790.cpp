#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int Tc;
    std::cin >> Tc;

    for(int i = 1; i<=Tc; i++)
    {
        std::string str;
        std::cin >> str;

        for(int j = str.length()-1; j>0; j--)
        {
            if(str[j]>=str[j-1])
                continue;
            str[j-1]--;
            for(int k = j; k<str.length(); k++)
                str[k] = '9'; 
        }
        std::cout << "Case #" << i << ": " << std::stoll(str) << '\n'; 
    }
    return 0;
}