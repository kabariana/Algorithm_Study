#include <bits/stdc++.h>
#define MAX 1000000 + 1

char res[MAX];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str, bomb;
    std::cin >> str >> bomb;

    int loc = 0;

    for(int i = 0; i<str.length(); i++)
    {
        res[loc++] = str[i];
        if(res[loc-1] == bomb[bomb.length()-1])
        {
            if(loc - bomb.length() < 0)
                continue;
            bool chk = true;
            for(int j = 0; j < bomb.length(); j++)
            {
                if(res[loc - j - 1] != bomb[bomb.length()-j-1])
                {
                    chk = false;
                    break;
                }
            }
            if(chk)
                loc -= bomb.length();
        }
    }
    if(!loc)
        std::cout << "FRULA\n";
    else
    {
        for(int i = 0; i < loc; i++)
            std::cout << res[i];
        std::cout << '\n';
    }
    return 0;
}