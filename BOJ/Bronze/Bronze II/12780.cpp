#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str1, str2;
    int cnt = 0;
    std::cin >> str1 >> str2;

    for(int i = 0; str1[i]; i++)
    {
        if(str1.substr(i, str2.size())== str2)
            cnt++;
    }
    std::cout << cnt;
    return 0;
}