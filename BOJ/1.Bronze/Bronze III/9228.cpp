#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;

    while(true)
    {
        std::cin >> str;
        std::string ans = "";
        if(str == "#")
            break;
        int sum = 0;
        for(int i = str.size()-1, j = 2; i >= 0; i--, j++)
            sum += (str[i]-'0')*j;
        sum %= 11;
        int checkD = 11 - sum;
        if(checkD >= 1 && checkD <= 9)
            ans += std::to_string(checkD);
        else if(checkD == 11)
            ans += "0";
        else if(checkD == 10)
            ans = "Rejected";

        std::cout << str << " -> " << ans << '\n';
    }
    return 0;
}