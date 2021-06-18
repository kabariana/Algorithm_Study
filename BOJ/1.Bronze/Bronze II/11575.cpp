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
        std::string str;
        std::cin >> a >> b >> str;

        for(auto i : str)
            std::cout << char((a*(i-'A')+b)%26 +'A');
        std::cout << '\n';
    }
    return 0;
}