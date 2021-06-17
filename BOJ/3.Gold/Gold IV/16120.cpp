#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    int cnt = 0;

    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] == 'P')
        {
            cnt++;
            continue;
        }

        if(cnt >= 2 && str[i+1] == 'P')
        {
            cnt--;
            i++;
        }
        else
        {
            std::cout << "NP\n";
            return 0;
        }
    }

    if(cnt == 1)
        std::cout << "PPAP\n";
    else
        std::cout << "NP\n";
    return 0;
}