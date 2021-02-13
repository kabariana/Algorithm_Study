#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int cnt;
        std::string str;
        std::cin >> str;

        if(str == "0")
            break;

        cnt = 2 + (str.size()-1);

        for(int i = 0; str[i]; i++)
        {
            switch(str[i]-'0')
            {
            case 1:
                cnt+= 2;
                break;
            case 0:
                cnt+= 4;
                break;
            default:
                cnt += 3;
                break;
            }
        }
        std::cout << cnt << '\n';
    }
    return 0;
}