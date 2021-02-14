#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        char cmp;
        std::string str;
        std::cin >> cmp;
        std::getline(std::cin, str);

        if(cmp == '#')
            break;

        int cnt = 0;
        for(int i = 0; str[i]; i++)
        {
            if(std::tolower(str[i])==cmp)
                cnt++;
        }
        std::cout << cmp << ' ' << cnt <<'\n';
    }
    return 0;
}