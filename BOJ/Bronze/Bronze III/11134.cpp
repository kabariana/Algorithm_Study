#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int n, c;
        std::cin >> n >> c;

        if(n%c == 0)
            std::cout << n/c << '\n';
        else
            std::cout << n/c + 1 << '\n';
    }
    return 0;
}