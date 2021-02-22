#include <bits/stdc++.h>

int main(int argac, char* argv[])
{
    int n;
    std::cin >> n;
    while(n--)
    {
        int num;
        std::cin >> num;

        if(std::abs(num)%2 == 1)
            std::cout << num << " is odd\n";
        else
            std::cout << num << " is even\n";
    }
    return 0;
}