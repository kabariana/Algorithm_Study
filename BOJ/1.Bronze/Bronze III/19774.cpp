#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--)
    {
        std::string str;
        std::cin >> str;
        int a = std::stoi(str.substr(0, 2));
        int b = std::stoi(str.substr(2, 4));

        if((a*a + b*b) % 7 == 1)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}