#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    for(int i = 0; i<3; i++)
    {
        std::string str;
        std::cin >> str;

        int cnt = 1, maxV = 1;
        char temp = str[0];
        for(int j = 1; str[j]; j++)
        {
            if(temp == str[j])
            {
                cnt++;
                maxV = std::max(cnt, maxV);
                continue;
            }
            cnt=1;
            temp = str[j];
        }
        std::cout << maxV <<'\n';
    }
    return 0;
}