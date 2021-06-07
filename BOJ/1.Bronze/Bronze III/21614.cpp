#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str, tmp = "";
    while(std::cin >> str && str != "99999")
    {
        if((str[0]-'0' + str[1]-'0')%2)
            tmp = "left";
        else if(str[0] == '0' && str[1] == '0')
        {
            // nothing to do
        }
        else
            tmp = "right";
        std::cout << tmp << " " << str[2] << str[3] << str[4] << '\n'; 
    }
    return 0;
}