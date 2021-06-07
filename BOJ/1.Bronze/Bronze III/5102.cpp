#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b;
    while(std::cin >> a>> b && a)
    {
        if((a - b) % 2 == 0)
            std::cout << (a-b)/2 << " 0\n";
        else
        {
            if(a-b == 3)
                std::cout << "0 1\n";
            else if(a-b-3 >= 3)
                std::cout << (a-b-3)/2 << " 1\n";
            else
                std::cout << "0 0\n";
        }
    }
    return 0;
}