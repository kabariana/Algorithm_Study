#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int j_cnt = 0, i_cnt = 0;
    for(int i = 2; str[i]; i++)
    {
        if(str[i] == 'I' && str[i-1] == 'O')
        {
            if(str[i-2]=='J')
                j_cnt++;
            else if(str[i-2]=='I')
                i_cnt++;
        }
    }
    std::cout << j_cnt << '\n' << i_cnt;
    return 0;
}