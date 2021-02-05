#include <iostream>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr), std::cin.tie(nullptr);

    int n;

    std::cin >> n;

    if(n <= 5) 
        std::cout << n;
    else
    {
        if((n-5)/4%2 == 0)
            std::cout << 5 - (n-5)%4;
        else
            std::cout << 1 + (n-5)%4;
    }
    return 0;
}