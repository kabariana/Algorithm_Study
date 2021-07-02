#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        std::string str;
        std::cin >> str;

        std::cout << "Case #" << i << ": " << str << " is ruled by ";
        if(str[str.length()-1] == 'y')
            std::cout << "nobody.\n";
        else if(str[str.length()-1] == 'a' || str[str.length()-1] == 'e' || str[str.length()-1] == 'i' || str[str.length()-1] == 'o' || str[str.length()-1] == 'u')
            std::cout << "a queen.\n";
        else
            std::cout << "a king.\n";            
    }
    return 0;
}