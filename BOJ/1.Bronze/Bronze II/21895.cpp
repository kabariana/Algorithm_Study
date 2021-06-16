#include <bits/stdc++.h>

bool func(char a, char b)
{
    if(a == 'R')
        return b == 'S';
    else if(a == 'P')
        return b == 'R';
    else
        return b == 'P';
}

char tmp[] = {'R', 'P', 'S'};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::string str1, str2;
    std::cin >> n >> str1 >> str2;

    for(int i = 0; i<n; i++)
    {
        if(str1[i] == str2[i])
        {
            for(int j = 0; j<3; j++)
            {
                if(func(tmp[j], str1[i]))
                {
                    std::cout << tmp[j];
                    break;
                }
            }
        }
        else
        {
            if(func(str1[i], str2[i]))
                std::cout << str1[i];
            else
                std::cout << str2[i];
        }
    }
    std::cout << '\n';
    return 0;
}