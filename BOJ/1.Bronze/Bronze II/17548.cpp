#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    int cnt = 0;
    for(int i = 0; i<str.size(); i++)
        if(str[i] == 'e')
            cnt++;
    std::cout << "h";
    for(int i = 0; i<cnt * 2; i++)
        std::cout << "e";
    std::cout << "y\n";
    return 0;
}