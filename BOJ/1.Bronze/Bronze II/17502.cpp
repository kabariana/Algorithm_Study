#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    std::string str;
    std::cin >> str;

    for(int i = 0; i <= N/2; i++)
    {
        if(str[i] == '?' && str[N-1-i] == '?')
        {
            str[i] = 'a';
            str[N-1-i] = 'a';
        }
        else if(str[i] == '?' && str[N-1-i] != '?')
            str[i] = str[N-1-i];
        else
            str[N-1-i] = str[i];
    }
    std::cout << str << '\n';
    return 0;
}