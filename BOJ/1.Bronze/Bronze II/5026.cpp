#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, found = 0;
    std::string str;

    std::cin >> n;

    while(n--)
    {
        std::cin >> str;
        found = str.find('+');
        if(found != -1)
        {
            std::string first = str.substr(0, found);
            std::string second = str.substr(found + 1);
            std::cout << std::stoi(first) + std::stoi(second)  << '\n';
        }
        else
            std::cout << "skipped\n";
    }
    return 0;
}