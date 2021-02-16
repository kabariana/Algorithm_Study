#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m, cnt = 0;
    std::string s;
    std::cin >> n >> m >> s;

    for(int i = 0; i<m; i++)
    {
        int nKey = 0;
        if(s[i] == 'O')
            continue;
        else
        {
            while(s[i+1]=='O' && s[i+2] == 'I')
            {
                nKey++;
                if(nKey == n)
                {
                    nKey--; // 중복 제거
                    cnt++;
                }
                i+=2;
            }
            nKey = 0;
        }
    }
    std::cout << cnt;
    return 0;
}