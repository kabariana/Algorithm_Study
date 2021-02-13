#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    while(n--)
    {
        std::string str;
        std::cin >> str;

        if((str[str.size()-1] - '0')%2== 0)
            std::cout << "even\n";
        else
            std::cout << "odd\n";
    }
    return 0;
}