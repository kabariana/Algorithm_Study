#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    while(std::getline(std::cin, str) && str != "#")
    {
        int score1 = 0, score2 = 0;
        for(int i = 0; i<str.length(); i++)
        {
            if(str[i] == 'A')
                score1++;
            else if(str[i] == '*')
                break;
            else if(str[i] != ' ' && ((str[i]-'0')%2))
                score1++;
            else if(str[i]!= ' ' && !((str[i]-'0')%2))
                score2++;
        }
        std::cout << (score1 != score2 ? score1 > score2 ? "Cheryl" : "Tania" : "Draw") << '\n';
    }
    return 0;
}