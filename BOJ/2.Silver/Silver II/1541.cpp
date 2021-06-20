// 뺄셈 이후마다 괄호치면 그 값이 최소임
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str, tmp = "";
    std::cin >> str;

    bool sub = false;
    int res = 0;
    for(int i = 0; i<= str.size(); i++)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if(sub)
                res -= std::stoi(tmp);
            else   
                res += std::stoi(tmp);
            tmp = "";
            if(str[i] == '-')
                sub = true;
            continue;
        }
        tmp += str[i];
    }
    std::cout << res << '\n';   
    return 0;
}