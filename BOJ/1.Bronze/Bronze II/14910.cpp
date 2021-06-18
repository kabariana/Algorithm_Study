#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b;
    std::cin >> a;
    while(std::cin >> b)
    {
        if(a > b)
        {
            std::cout << "Bad\n";
            return 0;
        }
        a = b;
    }
    std::cout << "Good\n";
}