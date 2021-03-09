#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int a, b;
        std::cin >> a >> b;
        if(b%a == 0)
            std::cout << "TAK\n";
        else
            std::cout << "NIE\n";
    }
    return 0;
}