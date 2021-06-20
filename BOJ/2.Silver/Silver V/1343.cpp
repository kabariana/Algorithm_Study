// 짝수 - 문자삽입, 홀수이면 -1
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    for(int i = 0; i<str.length();)
    {
        if(str[i] == '.')
        {
            i++;
            continue;
        }
        int cnt = 0;

        for(int j = i; j<str.length() && str[j] == 'X'; j++)
            cnt++;
        if(cnt%2)
        {
            std::cout << "-1\n";
            return 0;
        }
        int ind = 0;
        while(ind < cnt)
        {
            if(cnt - ind >= 4)
            {
                for(int k = 0; k < 4; k++)
                {
                    str[i + ind] = 'A';
                    ind++;
                }
            }
            else
            {
                for(int k = 0; k<2; k++)
                {
                    str[i + ind] = 'B';
                    ind++;
                }
            }
        }
        i+= cnt;
    }
    std::cout << str << '\n';
    return 0;
}