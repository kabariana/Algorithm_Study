#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, n = 1;
    while(std::cin >> a >> b && a)
    {
        std::cout << "Hole #" << n++ << '\n';
        if(a == b)
            std::cout << "Par.\n";
        else if(b == 1)
            std::cout << "Hole-in-one.\n";
        else if(b == a - 1)
            std::cout << "Birdie.\n";
        else if(b == a - 2)
            std::cout << "Eagle.\n";
        else if(b <= a - 3)
            std::cout << "Doulbe Eagle.\n";
        else if(b == a + 1)
            std::cout << "Bogey.\n";
        else if(b >= a + 2)
            std::cout << "Double Bogey.\n";
        std::cout << '\n';
    }  
    return 0;
}