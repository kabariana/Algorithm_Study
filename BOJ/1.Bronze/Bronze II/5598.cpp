#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        str[i]-=3;
        if(str[i]<'A')
            str[i]+=26;
    }
    std::cout << str;
    return 0;
}