#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;

    char begin = str[0];

    bool flag = true;
    for(int i = 1; i <n; i++)
    {
        std::cin >> str;
        if(begin != str[0])
            flag = false;
    }
    if(flag)
        std::cout << "1";
    else
        std::cout << "0";
}