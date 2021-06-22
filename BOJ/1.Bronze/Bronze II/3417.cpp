#include <bits/stdc++.h>

int map[26][26];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    for(int i = 0; i<26; i++)
        for(int j = 0; j<26; j++)
            map[i][j] = 'A' + (i + j + 1) % 26;

    std::string str1, str2;
    while(std::cin >> str1 && str1 != "0")
    {
        std::cin >> str2;
        for(int i = 0; i<str2.size(); i++)
            std::cout << char(map[str1[i%str1.size()]-'A'][str2[i]-'A']);
        std::cout << '\n';
    }
    return 0;
}