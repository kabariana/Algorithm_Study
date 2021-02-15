#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int temp = 0;
    int l_cnt = 0, r_cnt = 0;

    for(int i = 0; str[i]; i++)
    {
        if(str[i]=='@' && temp == 0)
            l_cnt++;
        if(str[i]=='@' && temp == 1)
            r_cnt++;
        if(str[i] == '0')
            temp=1;
    }
    std::cout << l_cnt << ' ' << r_cnt;
    return 0;
}