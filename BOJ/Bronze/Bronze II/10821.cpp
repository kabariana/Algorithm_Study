#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int cnt = 0;
    for(int i = 0; str[i]; i++)
        if(str[i] == ',')
            cnt++;

    int nCnt = cnt + 1;
    std::cout << nCnt;
    return 0;
}