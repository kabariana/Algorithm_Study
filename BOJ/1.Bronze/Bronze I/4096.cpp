#include <bits/stdc++.h>

bool isPal(std::string str)
{
    int size = str.size();
    for(int i = 0; i < size / 2; i++)
        if(str[i] != str[size - 1 - i])
            return false;
    return true;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    while(true)
    {
        std::cin >> str;

        if(str == "0")
            break;

        bool flag = true;
        int size = str.size(), cnt = 0;
        int integer = std::stoi(str);

        while(true)
        {
            std::string tmp = std::to_string(integer);
            std::string ret = "";
            for(int i = tmp.size();  i < size; i++)
                ret += "0";
            tmp = ret + tmp;
            flag = isPal(tmp);
            if(flag)
                break;
            cnt++;
            integer = std::stoi(tmp) + 1;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}