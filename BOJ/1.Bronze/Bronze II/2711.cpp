#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int n;
        std::string str;

        std::cin >> n >> str;
        for(int i = 0; str[i]; i++)
            if(i != n-1)
                std::cout << str[i];
        std::cout << '\n';
    }
    return 0;
}