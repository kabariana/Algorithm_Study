#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int l = 0, r = 0;
    int len = str.size()/2;

    for(int i = 0; i<len; i++)
    {
        l += str[i]-'0';
        r += str[len*2-i-1]-'0';
    }
    if(l == r)
        std::cout << "LUCKY";
    else
        std::cout << "READY";
    return 0;
}