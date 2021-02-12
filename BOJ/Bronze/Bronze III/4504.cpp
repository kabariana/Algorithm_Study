#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n;
    std::cin >> n;

    while(true)
    {
        int num;
        std::cin >> num;
        if(num == 0)
            break;

        if(num % n != 0)
            std::cout << num << " is NOT a multiple of " << n << ".\n";
        else
            std::cout << num << " is a multiple of " << n << ".\n";
    }
    return 0;
}