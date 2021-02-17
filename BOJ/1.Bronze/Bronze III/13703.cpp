#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int num;
        std::cin >> num;

        std::cout << num*(num+1)/2 << ' ';
        std::cout << num*num << ' ';
        std::cout << num*(num+1) << '\n';
    }
    return 0;
}