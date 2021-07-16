#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    int n;
    std::cin >> str >> n;

    if(str == "residential")
    {
        if(n == 1)
            std::cout << 0;
        else if(2 <= n && n <= 5)
            std::cout << 1;
        else if(6 <= n && n <= 10)
            std::cout << 2;
        else if(11 <= n && n <= 15)
            std::cout << 3;
        else
            std::cout << 4;
    }
    else if(str == "commercial")
    {
        if(n == 1)
            std::cout << 0;
        else if(2 <= n && n <= 7)
            std::cout << 1;
        else if(8 <= n && n <= 14)
            std::cout << 2;
        else
            std::cout << 3;
    }
    else
    {
        if(n == 1)
            std::cout << 0;
        else if(2 <= n && n <= 4)
            std::cout << 1;
        else if(5 <= n && n <= 8)
            std::cout << 2;
        else if(9 <= n && n <= 12)
            std::cout << 3;
        else if(13 <= n && n <= 16)
            std::cout << 4;
        else
            std::cout << 5;
    }
    std::cout << '\n';
    return 0;
}